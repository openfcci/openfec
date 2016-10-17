<?php

/**
 * /disbursements/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/disbursements
 */

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_b/by_purpose/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_committee_committee_id_schedules_schedule_b_by_purpose
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_b_by_purpose($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_b/by_purpose/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_b/by_purpose/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_b/by_recipient/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_committee_committee_id_schedules_schedule_b_by_recipient
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_b_by_recipient($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_b/by_recipient/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_b/by_recipient/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_b/by_recipient_id/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_committee_committee_id_schedules_schedule_b_by_recipient_id
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_b_by_recipient_id($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_b/by_recipient_id/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_b/by_recipient_id/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_b/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_schedules_schedule_b
 */
function _openfec_api_get_schedules_schedule_b() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_b/'
        $response = $openfec_api->call("/schedules/schedule_b/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_b/by_purpose/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_schedules_schedule_b_by_purpose
 */
function _openfec_api_get_schedules_schedule_b_by_purpose() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_b/by_purpose/'
        $response = $openfec_api->call("/schedules/schedule_b/by_purpose/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_b/by_recipient/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_schedules_schedule_b_by_recipient
 */
function _openfec_api_get_schedules_schedule_b_by_recipient() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_b/by_recipient/'
        $response = $openfec_api->call("/schedules/schedule_b/by_recipient/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_b/by_recipient_id/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_schedules_schedule_b_by_recipient_id
 */
function _openfec_api_get_schedules_schedule_b_by_recipient_id() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_b/by_recipient_id/'
        $response = $openfec_api->call("/schedules/schedule_b/by_recipient_id/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_b/{sub_id}/'
 * @see https://api.open.fec.gov/developers/#!/disbursements/get_schedules_schedule_b_sub_id
 */
function _openfec_api_get_schedules_schedule_b_sub_id($sub_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_b/{sub_id}/'
        $response = $openfec_api->call("/schedules/schedule_b/{$sub_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
