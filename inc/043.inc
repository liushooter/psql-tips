    <div class="tip" name="43">
      The <code>-x</code> or <code>--expand</code> will expand the
      output for better readability.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -x -c 'select * from animal;'
-[ RECORD 1 ]------&#43;------------------------------------------
specie_code        | cat or dog or other kind of 4 paws animal
name               | Ada
sex                | Female
birth_date         | 2018-04-25
death_date         | 
mother_specie_code | cat or dog or other kind of 4 paws animal
mother_name        | Grace</code></pre>This feature is available
since at least Postgres 7.1.
    </div>
