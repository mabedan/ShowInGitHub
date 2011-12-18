/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSWindowRestoration-Protocol.h"

@class NSButton, NSImageView, NSScrollView, NSTextField, NSTextView;

@interface IDEAboutWindowController : NSWindowController <NSWindowRestoration>
{
    NSTextField *versionField;
    NSScrollView *additionalInfoScrollView;
    NSTextView *additionalInfoView;
    NSButton *moreInfoButton;
    NSScrollView *copyrightScrollView;
    NSTextView *copyrightView;
    NSTextField *appNameField;
    NSImageView *appIconView;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (id)sharedAboutWindowController;
- (id)_aboutPanelCredits;
- (void)_sizeAdditionalInfoView;
- (void)_sizeCopyrightView;
- (void)closeAboutWindow:(id)arg1;
- (void)openAboutWindow:(id)arg1;
- (void)showMoreInfo:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;

@end
