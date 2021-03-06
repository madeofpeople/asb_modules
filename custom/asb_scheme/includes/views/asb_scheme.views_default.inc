<?php

/**
 * @file
 * Bulk export of views_default objects generated by Bulk export module.
 */

/**
 * Implements hook_views_default_views().
 */
function asb_scheme_views_default_views() {
    $views = array();

    $view = new view();
    $view->name = 'scheme_members_admin';
    $view->description = '';
    $view->tag = 'og';
    $view->base_table = 'users';
    $view->human_name = 'Scheme members admin';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Scheme members admin';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'none';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '25';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
        'views_bulk_operations' => 'views_bulk_operations',
        'name' => 'name',
        'state' => 'state',
        'og_roles' => 'og_roles',
        'created' => 'created',
        'og_membership_request' => 'og_membership_request',
    );
    $handler->display->display_options['style_options']['default'] = 'name';
    $handler->display->display_options['style_options']['info'] = array(
        'views_bulk_operations' => array(
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
        'name' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
        'state' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
        'og_roles' => array(
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
        'created' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
        'og_membership_request' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
            'empty_column' => 0,
        ),
    );
    /* Footer: Global: Text area */
    $handler->display->display_options['footer']['area']['id'] = 'area';
    $handler->display->display_options['footer']['area']['table'] = 'views';
    $handler->display->display_options['footer']['area']['field'] = 'area';
    $handler->display->display_options['footer']['area']['empty'] = TRUE;
    $handler->display->display_options['footer']['area']['content'] = '<div id="add-people"><a href="/group/!1/!2/admin/people/add-user">Add new schemers</a></div>';
    $handler->display->display_options['footer']['area']['format'] = 'full_html';
    $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['content'] = 'No people found matching the search criteria.';
    $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
    /* Relationship: OG membership: OG membership from User */
    $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
    $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
    $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
    /* Field: Bulk operations: OG membership */
    $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
    $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Scheme Membership';
    $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
    $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
        'action::views_bulk_operations_delete_item' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::views_bulk_operations_delete_revision' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::18' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::asb_scheme_email_facilitator_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::201' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::asb_scheme_remind_facilitator_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::views_bulk_operations_script_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::views_bulk_operations_modify_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
            'settings' => array(
                'show_all_tokens' => 1,
                'display_values' => array(
                    '_all_' => '_all_',
                ),
            ),
        ),
        'action::og_set_state_action' => array(
            'selected' => 1,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::og_user_roles_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::views_bulk_operations_argument_selector_action' => array(
            'selected' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
            'settings' => array(
                'url' => '',
            ),
        ),
        'action::og_membership_delete_action' => array(
            'selected' => 1,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::system_send_email_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::136' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::mimemail_send_email_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
        'action::auto_entitylabel_entity_update_action' => array(
            'selected' => 0,
            'postpone_processing' => 0,
            'skip_confirmation' => 0,
            'override_label' => 0,
            'label' => '',
        ),
    );
    /* Field: User: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'users';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
    /* Field: OG membership: State */
    $handler->display->display_options['fields']['state']['id'] = 'state';
    $handler->display->display_options['fields']['state']['table'] = 'og_membership';
    $handler->display->display_options['fields']['state']['field'] = 'state';
    $handler->display->display_options['fields']['state']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['fields']['state']['label'] = 'Status';
    /* Field: OG membership: Edit link */
    $handler->display->display_options['fields']['edit_membership']['id'] = 'edit_membership';
    $handler->display->display_options['fields']['edit_membership']['table'] = 'og_membership';
    $handler->display->display_options['fields']['edit_membership']['field'] = 'edit_membership';
    $handler->display->display_options['fields']['edit_membership']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['fields']['edit_membership']['label'] = '';
    $handler->display->display_options['fields']['edit_membership']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['edit_membership']['destination'] = TRUE;
    /* Field: OG membership: Delete link */
    $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
    $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
    $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
    $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['fields']['delete_membership']['label'] = 'Remove';
    /* Field: OG membership: Approve Button */
    $handler->display->display_options['fields']['approve_button_membership']['id'] = 'approve_button_membership';
    $handler->display->display_options['fields']['approve_button_membership']['table'] = 'og_membership';
    $handler->display->display_options['fields']['approve_button_membership']['field'] = 'approve_button_membership';
    $handler->display->display_options['fields']['approve_button_membership']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['fields']['approve_button_membership']['label'] = 'Approve';
    $handler->display->display_options['fields']['approve_button_membership']['empty'] = 'Current Member';
    $handler->display->display_options['fields']['approve_button_membership']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['approve_button_membership']['empty_zero'] = TRUE;
    $handler->display->display_options['fields']['approve_button_membership']['hide_alter_empty'] = FALSE;
    /* Sort criterion: User: Name */
    $handler->display->display_options['sorts']['name']['id'] = 'name';
    $handler->display->display_options['sorts']['name']['table'] = 'users';
    $handler->display->display_options['sorts']['name']['field'] = 'name';
    /* Contextual filter: OG membership: Group_type */
    $handler->display->display_options['arguments']['group_type']['id'] = 'group_type';
    $handler->display->display_options['arguments']['group_type']['table'] = 'og_membership';
    $handler->display->display_options['arguments']['group_type']['field'] = 'group_type';
    $handler->display->display_options['arguments']['group_type']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['arguments']['group_type']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['group_type']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['group_type']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['group_type']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['group_type']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['group_type']['limit'] = '0';
    /* Contextual filter: OG membership: Group ID */
    $handler->display->display_options['arguments']['gid']['id'] = 'gid';
    $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
    $handler->display->display_options['arguments']['gid']['field'] = 'gid';
    $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
    $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
    $views['scheme_members_admin'] = $view;

    return $views;
}
