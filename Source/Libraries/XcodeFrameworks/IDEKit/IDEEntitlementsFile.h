/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath;

@interface IDEEntitlementsFile : NSObject
{
    DVTFilePath *_filePath;
    id _keyValuePairProxy;
}

- (id)allKeys;
- (BOOL)hasSandboxValues;
- (id)initWithFilePath:(id)arg1;
- (id)keyValuePairProxy;
- (void)noteValuesDidChange;
- (void)removeAllSandboxValues;

@end
