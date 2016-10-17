<?php

/**
 * /efiling/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/efiling
 */

/**
 * Operation: '/efile/filings/'
 * @see https://api.open.fec.gov/developers/#!/efiling/get_efile_filings
 */
function _openfec_api_get_efile_filings() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/efile/filings/'
        $response = $openfec_api->call("/efile/filings/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/efile/reports/{committee_type}/'
 * @see https://api.open.fec.gov/developers/#!/efiling/get_efile_reports_committee_type
 */
function _openfec_api_get_efile_reports_committee_type($committee_type) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/efile/reports/{committee_type}/'
        $response = $openfec_api->call("/efile/reports/{$committee_type}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
