//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMLSParser-Protocol.h>

@interface IKDOMLSParser : IKJSObject <IKJSDOMLSParser>
{
}

+ (id)_dataFromInput:(id)arg1;
@property(readonly, getter=replaceAction) long long ACTION_REPLACE;
@property(readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property(readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property(readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;
@property(readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
- (id)parseWithContext:(id)arg1:(id)arg2:(long long)arg3;
- (id)parse:(id)arg1;

@end

