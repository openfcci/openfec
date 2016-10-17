<?php

/**
 * /party-coordinated_expenditures/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/party-coordinated_expenditures
 */

/**
 * Operation: '/schedules/schedule_f/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_f
 */
function _openfec_api_get_schedules_schedule_f() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_f/'
        $response = $openfec_api->call("/schedules/schedule_f/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_f/{sub_id}/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_f_sub_id
 */
function _openfec_api_get_schedules_schedule_f_sub_id($sub_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_f/{sub_id}/'
        $response = $openfec_api->call("/schedules/schedule_f/{$sub_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
