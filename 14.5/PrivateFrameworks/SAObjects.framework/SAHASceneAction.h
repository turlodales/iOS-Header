//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSURL, SAHAAction;

@interface SAHASceneAction : SADomainObject
{
}

+ (id)sceneActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sceneAction;
@property(copy, nonatomic) NSURL *entityId;
@property(retain, nonatomic) SAHAAction *action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

