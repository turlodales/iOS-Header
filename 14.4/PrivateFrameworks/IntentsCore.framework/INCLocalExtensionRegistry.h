//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject
{
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)localExtensionForIdentifier:(id)arg1;
- (id)localExtensions;
- (void)deregisterLocalExtension:(id)arg1;
- (void)registerLocalExtension:(id)arg1;
- (id)init;

@end

