<?php

/**
 * /receipts/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/receipts
 */

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_a/by_employer/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_committee_committee_id_schedules_schedule_a_by_employer
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_a_by_employer($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_a/by_employer/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_a/by_employer/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_a/by_occupation/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_committee_committee_id_schedules_schedule_a_by_occupation
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_a_by_occupation($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_a/by_occupation/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_a/by_occupation/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_a/by_size/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_committee_committee_id_schedules_schedule_a_by_size
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_a_by_size($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_a/by_size/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_a/by_size/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_a/by_state/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_committee_committee_id_schedules_schedule_a_by_state
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_a_by_state($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_a/by_state/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_a/by_state/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_a/by_zip/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_committee_committee_id_schedules_schedule_a_by_zip
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_a_by_zip($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_a/by_zip/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_a/by_zip/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a
 */
function _openfec_api_get_schedules_schedule_a() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/'
        $response = $openfec_api->call("/schedules/schedule_a/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_employer/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_employer
 */
function _openfec_api_get_schedules_schedule_a_by_employer() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_employer/'
        $response = $openfec_api->call("/schedules/schedule_a/by_employer/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_occupation/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_occupation
 */
function _openfec_api_get_schedules_schedule_a_by_occupation() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_occupation/'
        $response = $openfec_api->call("/schedules/schedule_a/by_occupation/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_size/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_size
 */
function _openfec_api_get_schedules_schedule_a_by_size() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_size/'
        $response = $openfec_api->call("/schedules/schedule_a/by_size/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_size/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_size_by_candidate
 */
function _openfec_api_get_schedules_schedule_a_by_size_by_candidate() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_size/by_candidate/'
        $response = $openfec_api->call("/schedules/schedule_a/by_size/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_state/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_state
 */
function _openfec_api_get_schedules_schedule_a_by_state() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_state/'
        $response = $openfec_api->call("/schedules/schedule_a/by_state/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_state/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_state_by_candidate
 */
function _openfec_api_get_schedules_schedule_a_by_state_by_candidate() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_state/by_candidate/'
        $response = $openfec_api->call("/schedules/schedule_a/by_state/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/by_zip/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_by_zip
 */
function _openfec_api_get_schedules_schedule_a_by_zip() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/by_zip/'
        $response = $openfec_api->call("/schedules/schedule_a/by_zip/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_a/{sub_id}/'
 * @see https://api.open.fec.gov/developers/#!/receipts/get_schedules_schedule_a_sub_id
 */
function _openfec_api_get_schedules_schedule_a_sub_id($sub_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_a/{sub_id}/'
        $response = $openfec_api->call("/schedules/schedule_a/{$sub_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
