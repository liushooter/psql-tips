    <div class="tip">
	  You can use the <code>t</code> modifier to list only "trigger" functions with the
	  <code>\df</code> meta command.
      <pre><code class="hljs bash">laetitia=# \dftS
                                        List of functions
   Schema   |                Name                | Result data type | Argument data types | Type 
------------&#43;------------------------------------&#43;------------------&#43;---------------------&#43;------
 pg_catalog | RI_FKey_cascade_del                | trigger          |                     | func
 pg_catalog | RI_FKey_cascade_upd                | trigger          |                     | func
 pg_catalog | RI_FKey_check_ins                  | trigger          |                     | func
 pg_catalog | RI_FKey_check_upd                  | trigger          |                     | func
 pg_catalog | RI_FKey_noaction_del               | trigger          |                     | func
 pg_catalog | RI_FKey_noaction_upd               | trigger          |                     | func
 pg_catalog | RI_FKey_restrict_del               | trigger          |                     | func
 pg_catalog | RI_FKey_restrict_upd               | trigger          |                     | func
 pg_catalog | RI_FKey_setdefault_del             | trigger          |                     | func
 pg_catalog | RI_FKey_setdefault_upd             | trigger          |                     | func
 pg_catalog | RI_FKey_setnull_del                | trigger          |                     | func
 pg_catalog | RI_FKey_setnull_upd                | trigger          |                     | func
 pg_catalog | suppress_redundant_updates_trigger | trigger          |                     | func
 pg_catalog | trigger_in                         | trigger          | cstring             | func
 pg_catalog | tsvector_update_trigger            | trigger          |                     | func
 pg_catalog | tsvector_update_trigger_column     | trigger          |                     | func
 pg_catalog | unique_key_recheck                 | trigger          |                     | func
(17 rows)</code></pre>This feature is available
since Postgres 8.4.
	</div>
