    <div class="tip">
	The <code>&#43;</code> modifier to the <code>\d pattern</code> metacommand will, on top of displaying
	information about table, view, materialized view, index, sequence,
	foreign table, or composite type matching the pattern,, display any comments
	associated with the columns of the table are shown, as is the presence of
	OIDs in the table, the view definition if the relation is a view,
	a non-default replica identity setting.
      <pre><code class="hljs bash">laetitia=# \d&#43; test
                                                       Table "public.test"
 Column |  Type   | Collation | Nullable |           Default            | Storage  | Compression | Stats target |  Description   
--------&#43;---------&#43;-----------&#43;----------&#43;------------------------------&#43;----------&#43;-------------&#43;--------------&#43;----------------
 id     | integer |           | not null | generated always as identity | plain    |             |              | 
 value  | text    |           | not null |                              | extended | pglz        |              | column comment
Indexes:
    "test_value_key" UNIQUE CONSTRAINT, btree (value)
Access method: heap</code></pre>This feature is available
since Postgres 8.0.
	</div>
