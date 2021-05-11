    <div class="tip">
	  The description column displayed when using the <code>&#43;</code> modifier of a <code>\d</code>
	  metacommand can be filled using the <code>comment</code> SQL command.
      <pre><code class="hljs bash">laetitia=# \d&#43; test
                                                       Table "public.test"
 Column |  Type   | Collation | Nullable |           Default            | Storage  | Compression | Stats target |  Description   
--------&#43;---------&#43;-----------&#43;----------&#43;------------------------------&#43;----------&#43;-------------&#43;--------------&#43;----------------
 id     | integer |           | not null | generated always as identity | plain    |             |              | 
 value  | text    |           | not null |                              | extended | pglz        |              | column comment
Indexes:
    "test_value_key" UNIQUE CONSTRAINT, btree (value)
Access method: heap

laetitia=# comment on column test.id IS 'My awesome comment';
COMMENT
laetitia=# \d&#43; test
                                                         Table "public.test"
 Column |  Type   | Collation | Nullable |           Default            | Storage  | Compression | Stats target |    Description     
--------&#43;---------&#43;-----------&#43;----------&#43;------------------------------&#43;----------&#43;-------------&#43;--------------&#43;--------------------
 id     | integer |           | not null | generated always as identity | plain    |             |              | My awesome comment
 value  | text    |           | not null |                              | extended | pglz        |              | column comment
Indexes:
    "test_value_key" UNIQUE CONSTRAINT, btree (value)
Access method: heap</code></pre>This feature is available
since at least Postgres 7.1 for the <code>comment</code> SQL command. the <code>&#43;</code> modifier
appeared in different version, depending on the metacommand.
 </div>
