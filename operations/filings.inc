<?php

/**
 * /filings/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/filings
 */

/**
 * Operation: '/candidate/{candidate_id}/filings/'
 * @see https://api.open.fec.gov/developers/#!/filings/get_candidate_candidate_id_filings
 */
function _openfec_api_get_candidate_candidate_id_filings($candidate_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/filings/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/filings/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/filings/'
 * @see https://api.open.fec.gov/developers/#!/filings/get_committee_committee_id_filings
 */
function _openfec_api_get_committee_committee_id_filings($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/filings/'
        $response = $openfec_api->call("/committee/{$committee_id}/filings/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/filings/'
 * @see https://api.open.fec.gov/developers/#!/filings/get_filings
 */
function _openfec_api_get_filings() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/filings/'
        $response = $openfec_api->call("/filings/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
