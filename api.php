<?php
    /*-----------------------------------------------------------------------------
     * PHP client library for OpenFEC API
     *
     * Author:      Logan Miller
     *
     * Version:     1.0
     * Updated:     Fri Oct 14 2016
     *
     * For the OpenFEC API documentation see:
     *              https://api.open.fec.gov/developers/
     *-----------------------------------------------------------------------------
     */

    class OpenFECAPI {
        private $_version = '1.0';
        private $_key = ''; // API KEY GOES HERE!!!
        private $_url = 'https://api.open.fec.gov/v1';
        private $_library;

        public function __construct() {
            // Determine which HTTP library to use:
            // check for cURL, else fall back to file_get_contents
            if (function_exists('curl_init')) {
                $this->_library = 'curl';
            } else {
                $this->_library = 'fopen';
            }
        }

        public function version() {
            return $this->_version;
        }

        // Add required api_* arguments
        private function _args($args) {
            //OpenFEC API Key
            $args['api_key'] = $this->_key;

            //API defaults
            $args['sort'] = 'name';
            $args['per_page'] = 20;
            $args['page'] = 1;

            return $args;
        }

        // Construct call URL
        public function call_url($call, $args=array()) {
            $url = $this->_url . $call . '?' . http_build_query($this->_args($args), "", "&");
            return $url;
        }

        // Make an API call
        public function call($call, $args=array()) {
            $url = $this->call_url($call, $args);

            $response = null;
            switch($this->_library) {
                case 'curl':
                    $curl = curl_init();
                    curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
                    curl_setopt($curl, CURLOPT_URL, $url);
                    $response = curl_exec($curl);
                    curl_close($curl);
                    break;
                default:
                    $response = file_get_contents($url);
            }

            $unserialized_response = @unserialize($response);

            return $unserialized_response ? $unserialized_response : $response;
        }
    }
?>
