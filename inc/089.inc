    <div class="tip">
	  You can use the <code>p</code> modifier to list only procedures with the
	  <code>\df</code> meta command.
      <pre><code class="hljs bash">laetitia=# \dfp
                          List of functions
 Schema |    Name    | Result data type | Argument data types | Type 
--------&#43;------------&#43;------------------&#43;---------------------&#43;------
 public | inset_data |                  | a text              | proc
(1 row)</code></pre>This feature is available
since Postgres 11.
	</div>
