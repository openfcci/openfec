<?php

/**
 * /committee/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/committee
 */

/**
 * Operation: '/candidate/{candidate_id}/committees/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_candidate_candidate_id_committees
 */
function _openfec_api_get_candidate_candidate_id_committees($candidate_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/committees/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/committees/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidate/{candidate_id}/committees/history/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_candidate_candidate_id_committees_history
 */
function _openfec_api_get_candidate_candidate_id_committees_history($candidate_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/committees/history/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/committees/history/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidate/{candidate_id}/committees/history/{cycle}/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_candidate_candidate_id_committees_history_cycle
 */
function _openfec_api_get_candidate_candidate_id_committees_history_cycle($candidate_id, $cycle) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/committees/history/{cycle}/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/committees/history/{$cycle}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_committee_committee_id
 */
function _openfec_api_get_committee_committee_id($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/'
        $response = $openfec_api->call("/committee/{$committee_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/history/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_committee_committee_id_history
 */
function _openfec_api_get_committee_committee_id_history($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/history/'
        $response = $openfec_api->call("/committee/{$committee_id}/history/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/history/{cycle}/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_committee_committee_id_history_cycle
 */
function _openfec_api_get_committee_committee_id_history_cycle($committee_id, $cycle) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/history/{cycle}/'
        $response = $openfec_api->call("/committee/{$committee_id}/history/{$cycle}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committees/'
 * @see https://api.open.fec.gov/developers/#!/committee/get_committees
 */
function _openfec_api_get_committees() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committees/'
        $response = $openfec_api->call("/committees/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
