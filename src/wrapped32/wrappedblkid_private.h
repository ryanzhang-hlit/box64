#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(blkid_dev_devname, pFp)
GO(blkid_dev_has_tag, iFppp)
GO(blkid_dev_iterate_begin, pFp)
GO(blkid_dev_iterate_end, vFp)
GO(blkid_dev_next, iFpbp_)
GO(blkid_devno_to_devname, pFU)
GO(blkid_devno_to_wholedisk, iFUpLp)
GO(blkid_dev_set_search, iFppp)
GO(blkid_do_fullprobe, iFp)
GO(blkid_do_probe, iFp)
GO(blkid_do_safeprobe, iFp)
GO(blkid_do_wipe, iFpi)
GO(blkid_encode_string, iFppL)
GO(blkid_evaluate_spec, pFpbp_)
GO(blkid_evaluate_tag, pFppbp_)
GO(blkid_find_dev_with_tag, pFppp)
GO(blkid_free_probe, vFp)
GO(blkid_gc_cache, vFp)
GO(blkid_get_cache, iFbp_p)
GO(blkid_get_dev, pFppi)
GO(blkid_get_devname, pFppp)
GO(blkid_get_dev_size, IFi)
GO(blkid_get_library_version, iFbp_bp_)
GO(blkid_get_tag_value, pFppp)
GO(blkid_init_debug, vFi)
GO(blkid_known_fstype, iFp)
GO(blkid_known_pttype, iFp)
GO(blkid_new_probe, pFv)
GO(blkid_new_probe_from_filename, pFp)
GO(blkid_parse_tag_string, iFpbp_bp_)
GO(blkid_parse_version_string, iFp)
GO(blkid_partition_get_flags, UFp)
GO(blkid_partition_get_name, pFp)
GO(blkid_partition_get_partno, iFp)
GO(blkid_partition_get_size, IFp)
GO(blkid_partition_get_start, IFp)
GO(blkid_partition_get_table, pFp)
GO(blkid_partition_get_type, iFp)
GO(blkid_partition_get_type_string, pFp)
GO(blkid_partition_get_uuid, pFp)
GO(blkid_partition_is_extended, iFp)
GO(blkid_partition_is_logical, iFp)
GO(blkid_partition_is_primary, iFp)
GO(blkid_partitions_get_name, iFLbp_)
GO(blkid_partlist_devno_to_partition, pFpU)
GO(blkid_partlist_get_partition, pFpi)
GO(blkid_partlist_get_partition_by_partno, pFpi)
GO(blkid_partlist_get_table, pFp)
GO(blkid_partlist_numof_partitions, iFp)
GO(blkid_parttable_get_id, pFp)
GO(blkid_parttable_get_offset, IFp)
GO(blkid_parttable_get_parent, pFp)
GO(blkid_parttable_get_type, pFp)
GO(blkid_probe_all, iFp)
GO(blkid_probe_all_new, iFp)
GO(blkid_probe_all_removable, iFp)
GO(blkid_probe_enable_partitions, iFpi)
GO(blkid_probe_enable_superblocks, iFpi)
GO(blkid_probe_enable_topology, iFpi)
GO(blkid_probe_filter_partitions_type, iFpibp_)
GO(blkid_probe_filter_superblocks_type, iFpibp_)
GO(blkid_probe_filter_superblocks_usage, iFpii)
GO(blkid_probe_filter_types, iFpibp_)
GO(blkid_probe_filter_usage, iFpii)
GO(blkid_probe_get_devno, UFp)
GO(blkid_probe_get_fd, iFp)
GO(blkid_probe_get_offset, IFp)
GO(blkid_probe_get_partitions, pFp)
GO(blkid_probe_get_sectors, IFp)
GO(blkid_probe_get_sectorsize, uFp)
GO(blkid_probe_get_size, IFp)
GO(blkid_probe_get_topology, pFp)
GO(blkid_probe_get_value, iFpibp_bp_bL_)
GO(blkid_probe_get_wholedisk_devno, UFp)
GO(blkid_probe_has_value, iFpp)
GO(blkid_probe_hide_range, iFpUU)
GO(blkid_probe_invert_filter, iFp)
GO(blkid_probe_invert_partitions_filter, iFp)
GO(blkid_probe_invert_superblocks_filter, iFp)
GO(blkid_probe_is_wholedisk, iFp)
GO(blkid_probe_lookup_value, iFppbp_bL_)
GO(blkid_probe_numof_values, iFp)
GO(blkid_probe_reset_buffers, iFp)
GO(blkid_probe_reset_filter, iFp)
GO(blkid_probe_reset_hints, vFp)
GO(blkid_probe_reset_partitions_filter, iFp)
GO(blkid_probe_reset_superblocks_filter, iFp)
GO(blkid_probe_set_device, iFpiII)
GO(blkid_probe_set_hint, iFppU)
GO(blkid_probe_set_partitions_flags, iFpi)
GO(blkid_probe_set_request, iFpi)
GO(blkid_probe_set_sectorsize, iFpu)
GO(blkid_probe_set_superblocks_flags, iFpi)
GO(blkid_probe_step_back, iFp)
GO(blkid_put_cache, vFp)
GO(blkid_reset_probe, vFp)
GO(blkid_safe_string, iFppL)
GO(blkid_send_uevent, iFpp)
GO(blkid_superblocks_get_name, iFLbp_p)
GO(blkid_tag_iterate_begin, pFp)
GO(blkid_tag_iterate_end, vFp)
GO(blkid_tag_next, iFpbp_bp_)
GO(blkid_topology_get_alignment_offset, LFp)
GO(blkid_topology_get_dax, LFp)
GO(blkid_topology_get_diskseq, UFp)
GO(blkid_topology_get_logical_sector_size, LFp)
GO(blkid_topology_get_minimum_io_size, LFp)
GO(blkid_topology_get_optimal_io_size, LFp)
GO(blkid_topology_get_physical_sector_size, LFp)
GO(blkid_verify, pFpp)
GO(blkid_wipe_all, iFp)
