//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, PKPass;

@interface SUScriptPassbookPass : SUScriptObject
{
    PKPass *_pass;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *passURL;
@property(readonly) NSString *passTypeIdentifier;
- (id)_className;
- (void)dealloc;
- (id)initWithPass:(id)arg1;

@end

