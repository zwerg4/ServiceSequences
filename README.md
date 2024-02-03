# ServiceSequences

## Masterarbeit: A Framework for Automated Generation of IEC 61499 Interface Behaviour Models through Model Simulation


This is a 4diac IDE project which can be directly imported to edit and create new testing fucntion blocks, create Service Sequences out of it an export them as c++ tests.

### Folder structure:
- **TypeLibrary/servSeq_** : All function blocks created for testing
- **cppTests** : All ServiceSequences created for every testing FB exported as c++ test
- **cppTestsResults**: All coverage results from executing the c++ tests in HTML format
- **exportedFBs**: the exported testing FB for compiling a Forte out of it
- **traces**: The save files of the Service Sequences created out of the testing FBs


