
/* simuextf.h --- All external functions are included here. */

/*****************************************************************************/
/*****************************************************************************/

/***** in simu01.c *****/

void GetFromSimilixNew();

/***** in simu02.c *****/

void DoTextInput();
void DoTextSave();
void DoTextBreak();
void DoTextOutput();
void DoTextBack();

void CloseCmdWindow();

void DoUserAction01();
void DoUserAction02();

void DoDialogReturn();
void DoTextReturn();
void RepositionDialog();

void DoTextSaveOK();
void DoTextSaveCancel();

/***** in simu03.c *****/

void CancelDialog();
Widget CreateShell();

/***** in simua.c *****/

void ResetSimilix();
void ResetSimilixOK();
void ResetSimilixHelp();

void SimToScheme();
void SimToSchemeOK();
void SimToSchemeCancel();
void SimToSchemeHelp();

void CompileSimFile();
void CompileSimFileOK();
void CompileSimFileCancel();
void CompileSimFileHelp();

void CompileLoadSimFile();
void CompileLoadSimFileOK();
void CompileLoadSimFileCancel();
void CompileLoadSimFileHelp();

void LoadSimFile();
void LoadSimFileOK();
void LoadSimFileCancel();
void LoadSimFileHelp();

void LoadSchemeFile();
void LoadSchemeFileOK();
void LoadSchemeFileCancel();
void LoadSchemeFileHelp();

void FileToList();
void FileToListOK();
void FileToListCancel();
void FileToListHelp();

void FileToItem();
void FileToItemOK();
void FileToItemCancel();
void FileToItemHelp();

void CreateFile();
void CreateFileOK();
void CreateFileCancel();
void CreateFileHelp();

void OpenFile();
void OpenFileOK();
void OpenFileCancel();
void OpenFileHelp();

/***** in simua0.c *****/

void SourceCallback();
void CloseSourceOK();
void CloseSourceHelp();
void SaveSourceOK();
void SaveSourceHelp();

/***** in simub.c *****/

void FrontendWhole();
void FrontendWholeOK();
void FrontendWholeCancel();
void FrontendWholeHelp();

void ReloadAdtFile();
void ReloadAdtFileOK();
void ReloadAdtFileCancel();
void ReloadAdtFileHelp();

/***** in simuc.c *****/

void PreprocessWhole();
void PreprocessWholeOK();
void PreprocessWholeCancel();
void PreprocessWholeHelp();

void ShowCurrentPreprocessProg();
void ShowCurrentPreprocessProgCancel();
void ShowCurrentPreprocessProgHelp();
void ShowCurrentAnnProg();
void ShowCurrentFlowAllProg();
void ShowCurrentFlowIdProg();

void WritePreprocessProg();
void WritePreprocessProgOK();
void WritePreprocessProgCancel();
void WritePreprocessProgHelp();

void WriteAnnProgOK();
void WriteAnnProgCancel();
void WriteAnnProgHelp();

void ShowPreprocessProg();
void ShowAnnProgOK();
void ShowAnnProgCancel();
void ShowAnnProgHelp();

void PrintPreprocessProg();
void PrintAnnProgOK();
void PrintAnnProgCancel();
void PrintAnnProgHelp();

void VerbosePreprocess();
void VerbosePreprocessOK();
void VerbosePreprocessCancel();
void VerbosePreprocessHelp();

void BindPreprocessProg();
void BindAnnProgOK();
void BindAnnProgCancel();

/***** in simud.c *****/

void SpecializeWhole();
void SpecializeShortcut();
void SpecializeWholeOK();
void SpecializeWholeCancel();
void SpecializeWholeHelp();

void ShowCurrentResidualProg();
void ShowCurrentResidualProgOK();
void ShowCurrentResidualProgCancel();
void ShowCurrentResidualProgHelp();

void WriteResidualProg();
void WriteResProgOK();
void WriteResProgCancel();
void WriteResProgHelp();

void ShowResidualProg();
void ShowResProgOK();
void ShowResProgCancel();
void ShowResProgHelp();

void PrintResidualProg();
void PrintResProgOK();
void PrintResProgCancel();
void PrintResProgHelp();

void VerboseSpecialization();
void VerboseSpecializationOK();
void VerboseSpecializationCancel();
void VerboseSpecializationHelp();

void Memoization();
void MemoizationOK();
void MemoizationCancel();
void MemoizationHelp();

void PostUnfolding();
void PostUnfoldingOK();
void PostUnfoldingCancel();
void PostUnfoldingHelp();

void BindResidualProg();
void BindResProgOK();
void BindResProgCancel();

/***** in simue.c *****/

void CogenWhole();
void CogenShortcut();
void CogenWholeOK();
void CogenWholeCancel();
void CogenWholeHelp();

void ShowCurrentCompiler();
void ShowCurrentCompilerOK();
void ShowCurrentCompilerHelp();

void WriteCompiler();
void WriteCompilerOK();
void WriteCompilerCancel();
void WriteCompilerHelp();

void ShowCompiler();
void ShowCompilerOK();
void ShowCompilerCancel();
void ShowCompilerHelp();

void PrintCompiler();
void PrintCompilerOK();
void PrintCompilerCancel();
void PrintCompilerHelp();

/************/

void CompileWhole();
void CompileWholeOK();
void CompileWholeCancel();
void CompileWholeHelp();

/***** in simuf.c *****/

void RunOriginalProg();
void RunOriginalProgOK();
void RunOriginalProgCancel();
void RunOriginalProgHelp();

void TimingOriginalProg();
void TimingOriginalProgOK();
void TimingOriginalProgCancel();
void TimingOriginalProgHelp();

void RunResidualProg();
void RunResidualProgOK();
void RunResidualProgCancel();
void RunResidualProgHelp();

void TimingResidualProg();
void TimingResidualProgOK();
void TimingResidualProgCancel();
void TimingResidualProgHelp();

/***** in simug.c *****/

void ExitSimu();
void ExitSimuOK();
void ExitSimuHelp();

void DisplayHelpManual();

void DisplayHelperManualTest();

/***** in simug1.c *****/

void StartDisplay();
void CreateDisplayWidget();
void OptionCallback();
Boolean OpenHelpfile();
ShowpageGlobals *InitPsuedoGlobals();

/***** in simug11.c *****/

void CloseDisplayOK();
void CloseDisplayHelp();
/* Action Routines. */
void Quit();

/***** in simug10.c *****/

void PopdownWarning();
void PopupWarning();
void PositionCenter();

/***** in simug0.c *****/

void ChangeLabel();
ShowpageGlobals * GetGlobals();

/***** in ScrollByL.c *****/

/* Toolkit standard definitions. */
void XtResizeWidget(), XtMoveWidget();

/*****************************************************************************/
