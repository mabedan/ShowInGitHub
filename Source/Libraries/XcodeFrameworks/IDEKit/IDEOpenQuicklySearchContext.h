/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEOpenQuicklyMatchContext, IDEOpenQuicklyPattern, IDEWorkspaceTabController, NSString;

@interface IDEOpenQuicklySearchContext : NSObject
{
    IDEWorkspaceTabController *_workspaceTabController;
    NSString *_rawInput;
    NSString *_trimmedInput;
    NSString *_line;
    IDEOpenQuicklyMatchContext *_matchContext;
}

- (id)description;
- (id)initWithRawInput:(id)arg1 workspaceTabController:(id)arg2;
@property(readonly) NSString *line; // @synthesize line=_line;
@property(readonly) IDEOpenQuicklyMatchContext *matchContext; // @synthesize matchContext=_matchContext;
@property(readonly) IDEOpenQuicklyPattern *pattern;
@property(readonly) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(readonly) NSString *trimmedInput; // @synthesize trimmedInput=_trimmedInput;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;

@end
