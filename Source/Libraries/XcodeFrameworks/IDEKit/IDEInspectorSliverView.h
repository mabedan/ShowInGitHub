/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorPropertyContainingView.h>

@class DVTStackView, NSArray, NSTextField;

@interface IDEInspectorSliverView : IDEInspectorPropertyContainingView
{
    DVTStackView *propertyStack;
    NSTextField *labelView;
    NSArray *properties;
    BOOL fullWidth;
}

+ (id)labelWithTitle:(id)arg1;
+ (id)sliverForXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)sliverViewWithTitle:(id)arg1 andProperties:(id)arg2 fullWidth:(BOOL)arg3;
- (void)_invalidateLayoutBecauseOfPropertyStackFrameChange:(id)arg1;
- (id)initWithTitle:(id)arg1 andProperties:(id)arg2;
- (id)initWithTitle:(id)arg1 andProperties:(id)arg2 fullWidth:(BOOL)arg3;
- (BOOL)isFlipped;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)orderedInspectorProperties;

@end
