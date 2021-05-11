    <div class="tip">
	  <code>\d pattern</code> will  display for each relation (table, view, materialized
		view, index, sequence, or foreign table) or composite type matching the
		pattern, all columns, their types, the tablespace (if not the
		  default) and any special attributes such as NOT NULL or defaults.
		  Associated indexes, constraints, rules, and triggers are also shown.
		  For foreign tables, the associated foreign server is shown as
		  well.<br/>
		  <br/>
		  For some types of relation, <code>\d</code> shows additional information for each
		  column: column values for sequences, indexed expressions for indexes,
		  and foreign data wrapper options for foreign tables.
      <pre><code class="hljs bash">laetitia=# \d test
                          Table "public.test"
 Column |  Type   | Collation | Nullable |           Default            
--------&#43;---------&#43;-----------&#43;----------&#43;------------------------------
 id     | integer |           | not null | generated always as identity
 value  | text    |           | not null | 
Indexes:
    "test_value_key" UNIQUE CONSTRAINT, btree (value)</code></pre>This feature is available
since Postgres 7.1, but was updated with Postgres 9.0, Postgres 9.3.
	</div>
