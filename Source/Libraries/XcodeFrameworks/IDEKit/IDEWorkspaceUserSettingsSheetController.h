/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTFilePathFieldCellDelegate-Protocol.h"
#import "IDEWorkspaceUserSettingsBuildFolderLocationSheetControllerDelegate-Protocol.h"

@class DVTChoice, DVTFilePathField, DVTTabChooserView, IDEWorkspace, NSArray, NSButton, NSMenuItem, NSString, NSTextField, NSWindow;

@interface IDEWorkspaceUserSettingsSheetController : IDEViewController <IDEWorkspaceUserSettingsBuildFolderLocationSheetControllerDelegate, DVTFilePathFieldCellDelegate>
{
    NSWindow *_sheetWindow;
    NSButton *_doneButton;
    DVTTabChooserView *_tabChooser;
    NSWindow *_hostWindow;
    id _completionBlock;
    BOOL _didSheetEnd;
    NSString *_derivedDataCustomLocation;
    NSString *_buildSubfolderCustomName;
    int _derivedDataLocationStyle;
    int _buildLocationStyle;
    int _buildSubfolderNameStyle;
    BOOL _liveSourceIssuesEnabled;
    int _issueFilterStyle;
    int _snapshotLocationStyle;
    NSString *_snapshotCustomLocation;
    BOOL _takeSnapshotsBeforeSignificantChanges;
    NSButton *_takeSnapshotsCheckbox;
    IDEWorkspace *_workspace;
    NSArray *_selectedTabChoices;
    NSMenuItem *_workspaceRelativePathTypePopUpMenuItem;
    DVTFilePathField *_derivedDataFilePathField;
    NSTextField *_derivedDataRelativePathField;
    DVTFilePathField *_snapshotsFilePathField;
    DVTFilePathField *_derivedDataPathLabel;
    DVTFilePathField *_snapshotsPathLabel;
}

+ (void)beginSheetForWindow:(id)arg1 completionHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingBuildFolderDefaultName;
+ (id)keyPathsForValuesAffectingDerivedDataLocationChoice;
+ (id)keyPathsForValuesAffectingDerivedDataWorkspaceRelativeLocation;
+ (id)keyPathsForValuesAffectingExplanation;
+ (id)keyPathsForValuesAffectingSelectedTabChoice;
+ (id)keyPathsForValuesAffectingUseBuildFolder;
+ (id)keyPathsForValuesAffectingUseCustomLocation;
+ (id)keyPathsForValuesAffectingUseCustomName;
+ (id)keyPathsForValuesAffectingUseSnapshotCustomLocation;
+ (void)runSheetForWindow:(id)arg1;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_beginSheetForWindow:(id)arg1 completionHandler:(id)arg2;
- (void)_updateCustomLocationFieldsForPathTypes;
- (void)_updateDerivedDataCustomLocationFieldForPathType;
- (void)_updateDerivedDataPathLabelForSelectedLocationStyle;
- (void)_updatePathLabelsForSelectedLocationStyles;
- (void)_updateSnapshotsCustomLocationFieldForPathType;
- (void)_updateSnapshotsPathLabelForSelectedLocationStyle;
@property(readonly) NSString *buildFolderDefaultLocation;
@property(readonly) NSString *buildFolderDefaultName;
- (void)buildFolderLocationSheetDidEndWithBuildLocationStyle:(int)arg1 buildSubfolderNameStyle:(int)arg2 buildSubfolderCustomName:(id)arg3;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(copy) NSString *buildSubfolderCustomName; // @synthesize buildSubfolderCustomName=_buildSubfolderCustomName;
@property int buildSubfolderNameStyle; // @synthesize buildSubfolderNameStyle=_buildSubfolderNameStyle;
- (id)currentDerivedDataFolderPath;
@property(copy) NSString *derivedDataCustomLocation; // @synthesize derivedDataCustomLocation=_derivedDataCustomLocation;
@property int derivedDataLocationChoice;
@property int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
@property(readonly) NSString *derivedDataWorkspaceRelativeLocation;
@property NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property int issueFilterStyle; // @synthesize issueFilterStyle=_issueFilterStyle;
@property BOOL liveSourceIssuesEnabled; // @synthesize liveSourceIssuesEnabled=_liveSourceIssuesEnabled;
- (void)loadView;
@property DVTChoice *selectedTabChoice;
@property NSArray *selectedTabChoices; // @synthesize selectedTabChoices=_selectedTabChoices;
@property(copy) NSString *snapshotCustomLocation; // @synthesize snapshotCustomLocation=_snapshotCustomLocation;
@property int snapshotLocationStyle; // @synthesize snapshotLocationStyle=_snapshotLocationStyle;
@property BOOL takeSnapshotsBeforeSignificantChanges; // @synthesize takeSnapshotsBeforeSignificantChanges=_takeSnapshotsBeforeSignificantChanges;
@property IDEWorkspace *workspace;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)sheetDoneAction:(id)arg1;
- (void)showBuildFolderLocationSheet:(id)arg1;
@property(readonly) NSString *snapshotDefaultLocation;
@property(readonly) BOOL useBuildFolder;
@property(readonly) BOOL useCustomLocation;
@property(readonly) BOOL useCustomName;
@property(readonly) BOOL useSnapshotCustomLocation;
- (BOOL)validateBuildSubfolderCustomName:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDerivedDataCustomLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateSnapshotCustomLocation:(id *)arg1 error:(id *)arg2;

@end
