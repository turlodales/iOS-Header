//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REClassLoaderConfiguration-Protocol.h>

@class NSString;

@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>
{
}

+ (id)sharedInstance;
- (_Bool)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;
- (Class)desiredClassForLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

