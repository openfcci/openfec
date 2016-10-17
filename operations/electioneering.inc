<?php

/**
 * /electioneering/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/electioneering
 */

/**
 * Operation: '/committee/{committee_id}/electioneering/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/electioneering/get_committee_committee_id_electioneering_by_candidate
 */
function _openfec_api_get_committee_committee_id_electioneering_by_candidate($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/electioneering/by_candidate/'
        $response = $openfec_api->call("/committee/{$committee_id}/electioneering/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/electioneering/'
 * @see https://api.open.fec.gov/developers/#!/electioneering/get_electioneering
 */
function _openfec_api_get_electioneering() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/electioneering/'
        $response = $openfec_api->call("/electioneering/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/electioneering/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/electioneering/get_electioneering_by_candidate
 */
function _openfec_api_get_electioneering_by_candidate() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/electioneering/by_candidate/'
        $response = $openfec_api->call("/electioneering/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
