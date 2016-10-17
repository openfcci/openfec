<?php

/**
 * /filer_resources/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/filer_resources
 */

/**
 * Operation: '/rad-analyst/'
 * @see https://api.open.fec.gov/developers/#!/filer_resources/get_rad_analyst
 */
function _openfec_api_get_rad_analyst() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/rad-analyst/'
        $response = $openfec_api->call("/rad-analyst/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
