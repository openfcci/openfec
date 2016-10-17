<?php

/**
 * /candidate/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/candidate
 */

/**
 * Operation: '/candidate/{candidate_id}/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidates_search
 */
function _openfec_api_get_candidate_candidate_id($candidate_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidate/{candidate_id}/history/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidate_candidate_id_history
 */
function _openfec_api_get_candidate_candidate_id_history($candidate_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/history/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/history/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidate/{candidate_id}/history/{cycle}/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidate_candidate_id_history_cycle
 */
function _openfec_api_get_candidate_candidate_id_history_cycle($candidate_id, $cycle) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidate/{candidate_id}/history/{cycle}/'
        $response = $openfec_api->call("/candidate/{$candidate_id}/history/{$cycle}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidates/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidates
 */
function _openfec_api_get_candidates() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidates/'
        $response = $openfec_api->call("/candidates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidates/search/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidates_search
 */
function _openfec_api_get_candidate_search() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidates/search/'
        $response = $openfec_api->call("/candidates/search/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/candidates/totals/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_candidates_totals
 */
function _openfec_api_get_candidates_totals() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/candidates/totals/'
        $response = $openfec_api->call("/candidates/totals/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/candidates/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_committee_committee_id_candidates
 */
function _openfec_api_get_committee_committee_id_candidates($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/candidates/'
        $response = $openfec_api->call("/committee/{$committee_id}/candidates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/candidates/history/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_committee_committee_id_candidates_history
 */
function _openfec_api_get_committee_committee_id_candidates_history($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/candidates/history/'
        $response = $openfec_api->call("/committee/{$committee_id}/candidates/history/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/candidates/history/{cycle}/'
 * @see https://api.open.fec.gov/developers/#!/candidate/get_committee_committee_id_candidates_history_cycle
 */
function _openfec_api_get_committee_committee_id_candidates_history_cycle($committee_id, $cycle) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/candidates/history/{cycle}/'
        $response = $openfec_api->call("/committee/{$committee_id}/candidates/history/{$cycle}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
