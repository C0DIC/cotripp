# Cotripp

Translate your text and .txt files in terminal using LibreTranslate API

## Usage

Langauge auto-detected translate

``` text
cotripp [text] [output language]
```

``` text
Usage:
       cotripp [text] [output language]
       cotripp [text] [source language] [target language]

Translate files:
       cotripp [--file || -f] [file] [output language]
       cotripp [--file || -f] [file] [source language] [output language]
       cotripp [--file || -f] [file] [output language] [output file]
       cotripp [--file || -f] [file] [source language] [output language] [output file]
```

## Supported Languages

| Language      | ISO 639
| ------------- | ------------- |
| Russian       | ru            |
| English       | en            |
| Arabic        | ar            |
| Chinese       | zh            |
| French        | fr            |
| German        | de            |
| Hindi         | hi            |
| Indonesian    | id            |
| Irish         | ga            |
| Italian       | it            |
| Japanese      | ja            |
| Korean        | ko            |
| Polish        | pl            |
| Portuguese    | pt            |
| Spanish       | es            |
| Turkish       | tr            |
| Vietnamese    | vi            |

## Dependencies

libcurl:

``` text
sudo apt-get install -y libcurl4-openssl-dev
curl-config --libs
```

## Building

``` text
git clone
cd cotripp
make
```

## Uninstall

``` text
make clean
```

## References

- [LibreTranslate (github)](https://github.com/LibreTranslate/LibreTranslate)
- [LibreTranslate](https://libretranslate.com/)
- [LibreTranslate C++ API](https://github.com/argosopentech/LibreTranslate-cpp)
