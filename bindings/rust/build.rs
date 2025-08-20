fn main() {
    // Tell Cargo to rerun this build script if parser.c changes
    println!("cargo:rerun-if-changed=src/parser.c");

    cc::Build::new()
        .file("src/parser.c")
        .include("src/tree_sitter")
        .compile("tree-sitter-http");
}
