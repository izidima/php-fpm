#define event_active _fpm_event_active
#define event_add _fpm_event_add
#define event_base_dispatch _fpm_event_base_dispatch
#define event_base_free _fpm_event_base_free
#define event_base_get_method _fpm_event_base_get_method
#define event_base_loop _fpm_event_base_loop
#define event_base_loopbreak _fpm_event_base_loopbreak
#define event_base_loopexit _fpm_event_base_loopexit
#define event_base_new _fpm_event_base_new
#define event_base_once _fpm_event_base_once
#define event_base_priority_init _fpm_event_base_priority_init
#define event_base_set _fpm_event_base_set
#define event_del _fpm_event_del
#define event_dispatch _fpm_event_dispatch
#define event_get_method _fpm_event_get_method
#define event_get_version _fpm_event_get_version
#define event_init _fpm_event_init
#define event_loop _fpm_event_loop
#define event_loopbreak _fpm_event_loopbreak
#define event_loopexit _fpm_event_loopexit
#define event_once _fpm_event_once
#define event_pending _fpm_event_pending
#define event_priority_init _fpm_event_priority_init
#define event_priority_set _fpm_event_priority_set
#define event_reinit _fpm_event_reinit
#define event_set _fpm_event_set
#define _event_debugx _fpm__event_debugx
#define event_err _fpm_event_err
#define event_errx _fpm_event_errx
#define event_msgx _fpm_event_msgx
#define event_set_log_callback _fpm_event_set_log_callback
#define event_warn _fpm_event_warn
#define event_warnx _fpm_event_warnx
#define evutil_make_socket_nonblocking _fpm_evutil_make_socket_nonblocking
#define evutil_snprintf _fpm_evutil_snprintf
#define evutil_socketpair _fpm_evutil_socketpair
#define evutil_strtoll _fpm_evutil_strtoll
#define evutil_vsnprintf _fpm_evutil_vsnprintf
#define evhttp_accept_socket _fpm_evhttp_accept_socket
#define evhttp_add_header _fpm_evhttp_add_header
#define evhttp_bind_socket _fpm_evhttp_bind_socket
#define evhttp_clear_headers _fpm_evhttp_clear_headers
#define evhttp_connection_connect _fpm_evhttp_connection_connect
#define evhttp_connection_fail _fpm_evhttp_connection_fail
#define evhttp_connection_free _fpm_evhttp_connection_free
#define evhttp_connection_get_peer _fpm_evhttp_connection_get_peer
#define evhttp_connection_new _fpm_evhttp_connection_new
#define evhttp_connection_reset _fpm_evhttp_connection_reset
#define evhttp_connection_set_base _fpm_evhttp_connection_set_base
#define evhttp_connection_set_closecb _fpm_evhttp_connection_set_closecb
#define evhttp_connection_set_local_address _fpm_evhttp_connection_set_local_address
#define evhttp_connection_set_retries _fpm_evhttp_connection_set_retries
#define evhttp_connection_set_timeout _fpm_evhttp_connection_set_timeout
#define evhttp_decode_uri _fpm_evhttp_decode_uri
#define evhttp_del_cb _fpm_evhttp_del_cb
#define evhttp_encode_uri _fpm_evhttp_encode_uri
#define evhttp_find_header _fpm_evhttp_find_header
#define evhttp_free _fpm_evhttp_free
#define evhttp_get_request _fpm_evhttp_get_request
#define evhttp_hostportfile _fpm_evhttp_hostportfile
#define evhttp_htmlescape _fpm_evhttp_htmlescape
#define evhttp_make_header _fpm_evhttp_make_header
#define evhttp_make_request _fpm_evhttp_make_request
#define evhttp_new _fpm_evhttp_new
#define evhttp_parse_firstline _fpm_evhttp_parse_firstline
#define evhttp_parse_headers _fpm_evhttp_parse_headers
#define evhttp_parse_query _fpm_evhttp_parse_query
#define evhttp_read _fpm_evhttp_read
#define evhttp_remove_header _fpm_evhttp_remove_header
#define evhttp_request_free _fpm_evhttp_request_free
#define evhttp_request_new _fpm_evhttp_request_new
#define evhttp_request_set_chunked_cb _fpm_evhttp_request_set_chunked_cb
#define evhttp_request_uri _fpm_evhttp_request_uri
#define evhttp_response_code _fpm_evhttp_response_code
#define evhttp_send_error _fpm_evhttp_send_error
#define evhttp_send_page _fpm_evhttp_send_page
#define evhttp_send_reply _fpm_evhttp_send_reply
#define evhttp_send_reply_chunk _fpm_evhttp_send_reply_chunk
#define evhttp_send_reply_end _fpm_evhttp_send_reply_end
#define evhttp_send_reply_start _fpm_evhttp_send_reply_start
#define evhttp_set_cb _fpm_evhttp_set_cb
#define evhttp_set_gencb _fpm_evhttp_set_gencb
#define evhttp_set_timeout _fpm_evhttp_set_timeout
#define evhttp_start _fpm_evhttp_start
#define evhttp_start_read _fpm_evhttp_start_read
#define evhttp_write _fpm_evhttp_write
#define evhttp_write_buffer _fpm_evhttp_write_buffer
#define evbuffer_add _fpm_evbuffer_add
#define evbuffer_add_buffer _fpm_evbuffer_add_buffer
#define evbuffer_add_printf _fpm_evbuffer_add_printf
#define evbuffer_add_vprintf _fpm_evbuffer_add_vprintf
#define evbuffer_drain _fpm_evbuffer_drain
#define evbuffer_expand _fpm_evbuffer_expand
#define evbuffer_find _fpm_evbuffer_find
#define evbuffer_free _fpm_evbuffer_free
#define evbuffer_new _fpm_evbuffer_new
#define evbuffer_read _fpm_evbuffer_read
#define evbuffer_readline _fpm_evbuffer_readline
#define evbuffer_remove _fpm_evbuffer_remove
#define evbuffer_setcb _fpm_evbuffer_setcb
#define evbuffer_write _fpm_evbuffer_write
#define bufferevent_base_set _fpm_bufferevent_base_set
#define bufferevent_disable _fpm_bufferevent_disable
#define bufferevent_enable _fpm_bufferevent_enable
#define bufferevent_free _fpm_bufferevent_free
#define bufferevent_new _fpm_bufferevent_new
#define bufferevent_priority_set _fpm_bufferevent_priority_set
#define bufferevent_read _fpm_bufferevent_read
#define bufferevent_read_pressure_cb _fpm_bufferevent_read_pressure_cb
#define bufferevent_setcb _fpm_bufferevent_setcb
#define bufferevent_setfd _fpm_bufferevent_setfd
#define bufferevent_settimeout _fpm_bufferevent_settimeout
#define bufferevent_setwatermark _fpm_bufferevent_setwatermark
#define bufferevent_write _fpm_bufferevent_write
#define bufferevent_write_buffer _fpm_bufferevent_write_buffer
#define _event_strlcpy _fpm__event_strlcpy
#define selectops _fpm_selectops
#define pollops _fpm_pollops
#define epollops _fpm_epollops
#define devpollops _fpm_devpollops
#define evportops _fpm_evportops
#define kqops _fpm_kqops
#define evsignal_base _fpm_evsignal_base
#define evsignal_add _fpm_evsignal_add
#define evsignal_dealloc _fpm_evsignal_dealloc
#define evsignal_del _fpm_evsignal_del
#define evsignal_init _fpm_evsignal_init
#define evsignal_process _fpm_evsignal_process
#define _evsignal_restore_handler _fpm__evsignal_restore_handler
#define _evsignal_set_handler _fpm__evsignal_set_handler
#define current_base _fpm_current_base
#define encode_int _fpm_encode_int
#define evtag_consume _fpm_evtag_consume
#define evtag_decode_int _fpm_evtag_decode_int
#define evtag_decode_tag _fpm_evtag_decode_tag
#define evtag_encode_tag _fpm_evtag_encode_tag
#define evtag_init _fpm_evtag_init
#define evtag_marshal _fpm_evtag_marshal
#define evtag_marshal_int _fpm_evtag_marshal_int
#define evtag_marshal_string _fpm_evtag_marshal_string
#define evtag_marshal_timeval _fpm_evtag_marshal_timeval
#define evtag_payload_length _fpm_evtag_payload_length
#define evtag_peek _fpm_evtag_peek
#define evtag_peek_length _fpm_evtag_peek_length
#define evtag_unmarshal _fpm_evtag_unmarshal
#define evtag_unmarshal_fixed _fpm_evtag_unmarshal_fixed
#define evtag_unmarshal_int _fpm_evtag_unmarshal_int
#define evtag_unmarshal_string _fpm_evtag_unmarshal_string
#define evtag_unmarshal_timeval _fpm_evtag_unmarshal_timeval
#define evhttp_connection_set_local_port _fpm_evhttp_connection_set_local_port
#define evdns_add_server_port _fpm_evdns_add_server_port
#define evdns_clear_nameservers_and_suspend _fpm_evdns_clear_nameservers_and_suspend
#define evdns_close_server_port _fpm_evdns_close_server_port
#define evdns_count_nameservers _fpm_evdns_count_nameservers
#define evdns_err_to_string _fpm_evdns_err_to_string
#define evdns_init _fpm_evdns_init
#define evdns_nameserver_add _fpm_evdns_nameserver_add
#define evdns_nameserver_ip_add _fpm_evdns_nameserver_ip_add
#define evdns_resolv_conf_parse _fpm_evdns_resolv_conf_parse
#define evdns_resolve_ipv4 _fpm_evdns_resolve_ipv4
#define evdns_resolve_ipv6 _fpm_evdns_resolve_ipv6
#define evdns_resolve_reverse _fpm_evdns_resolve_reverse
#define evdns_resolve_reverse_ipv6 _fpm_evdns_resolve_reverse_ipv6
#define evdns_resume _fpm_evdns_resume
#define evdns_search_add _fpm_evdns_search_add
#define evdns_search_clear _fpm_evdns_search_clear
#define evdns_search_ndots_set _fpm_evdns_search_ndots_set
#define evdns_server_request_add_aaaa_reply _fpm_evdns_server_request_add_aaaa_reply
#define evdns_server_request_add_a_reply _fpm_evdns_server_request_add_a_reply
#define evdns_server_request_add_cname_reply _fpm_evdns_server_request_add_cname_reply
#define evdns_server_request_add_ptr_reply _fpm_evdns_server_request_add_ptr_reply
#define evdns_server_request_add_reply _fpm_evdns_server_request_add_reply
#define evdns_server_request_drop _fpm_evdns_server_request_drop
#define evdns_server_request_get_requesting_addr _fpm_evdns_server_request_get_requesting_addr
#define evdns_server_request_respond _fpm_evdns_server_request_respond
#define evdns_set_log_fn _fpm_evdns_set_log_fn
#define evdns_set_option _fpm_evdns_set_option
#define evdns_set_transaction_id_fn _fpm_evdns_set_transaction_id_fn
#define evdns_shutdown _fpm_evdns_shutdown
#define evrpc_add_hook _fpm_evrpc_add_hook
#define evrpc_free _fpm_evrpc_free
#define evrpc_init _fpm_evrpc_init
#define evrpc_make_request _fpm_evrpc_make_request
#define evrpc_pool_add_connection _fpm_evrpc_pool_add_connection
#define evrpc_pool_free _fpm_evrpc_pool_free
#define evrpc_pool_new _fpm_evrpc_pool_new
#define evrpc_pool_set_timeout _fpm_evrpc_pool_set_timeout
#define evrpc_register_rpc _fpm_evrpc_register_rpc
#define evrpc_remove_hook _fpm_evrpc_remove_hook
#define evrpc_reqstate_free _fpm_evrpc_reqstate_free
#define evrpc_request_done _fpm_evrpc_request_done
#define evrpc_unregister_rpc _fpm_evrpc_unregister_rpc