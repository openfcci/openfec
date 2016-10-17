<?php

/**
 * /search/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/search
 */

/**
 * Operation: '/names/candidates/'
 * @see https://api.open.fec.gov/developers/#!/search/get_names_candidates
 */
function _openfec_api_get_names_candidates() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/names/candidates/'
        $response = $openfec_api->call("/names/candidates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/names/committees/'
 * @see https://api.open.fec.gov/developers/#!/search/get_names_committees
 */
function _openfec_api_get_names_committees() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/names/committees/'
        $response = $openfec_api->call("/names/committees/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
