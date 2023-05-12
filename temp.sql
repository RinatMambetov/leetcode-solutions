rewrite this postgres procedure so that p_file_path can be relative using getcwd() function of the PostgreSQL libpq library

CREATE OR REPLACE PROCEDURE import_table_from_csv (p_table text, p_file_path text, p_separator text)
LANGUAGE plpgsql
AS $$
DECLARE
    v_query text;
BEGIN
    -- Construct query and load data from file
    v_query := FORMAT('COPY %s FROM PROGRAM ''/bin/cat %s'' WITH CSV DELIMITER ''%s''', p_table, p_file_path, p_separator);
    EXECUTE v_query;
END;
$$;

-- SELECT current_setting('data_directory') AS current_directory_path;
