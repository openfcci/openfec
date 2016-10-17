<?php

/**
 * /financial/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/financial
 */

/**
 * Operation: '/committee/{committee_id}/reports/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_committee_committee_id_reports
 */
function _openfec_api_get_committee_committee_id_reports($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/reports/'
        $response = $openfec_api->call("/committee/{$committee_id}/reports/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/totals/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_committee_committee_id_totals
 */
function _openfec_api_get_committee_committee_id_totals($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/totals/'
        $response = $openfec_api->call("/committee/{$committee_id}/totals/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/elections/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_elections
 */
function _openfec_api_get_elections() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/elections/'
        $response = $openfec_api->call("/elections/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/elections/search/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_elections_search
 */
function _openfec_api_get_elections_search() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/elections/search/'
        $response = $openfec_api->call("/elections/search/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/elections/summary/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_elections_summary
 */
function _openfec_api_get_elections_summary() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/elections/summary/'
        $response = $openfec_api->call("/elections/summary/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/reports/{committee_type}/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_reports_committee_type
 */
function _openfec_api_get_reports_committee_type($committee_type) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/reports/{committee_type}/'
        $response = $openfec_api->call("/reports/{$committee_type}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/totals/{committee_type}/'
 * @see https://api.open.fec.gov/developers/#!/financial/get_totals_committee_type
 */
function _openfec_api_get_totals_committee_type($committee_type) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/totals/{committee_type}/'
        $response = $openfec_api->call("/totals/{$committee_type}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
