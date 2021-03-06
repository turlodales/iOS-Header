//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject
{
    NSString *_bodyData;
    SUScriptError *_error;
    long long _statusCode;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) long long HTTPStatusCode;
@property(readonly) SUScriptError *error;
- (id)_className;
@property(readonly) NSString *bodyData;
- (void)dealloc;
- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;

@end

