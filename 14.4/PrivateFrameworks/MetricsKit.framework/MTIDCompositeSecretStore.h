//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDSecretStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore>
{
    NSMutableDictionary *_stores;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stores; // @synthesize stores=_stores;
- (id)debugInfo;
- (void)clearLocalData;
- (id)maintainSchemes:(id)arg1 options:(id)arg2;
- (id)resetSchemes:(id)arg1 options:(id)arg2;
- (id)secretForScheme:(id)arg1 options:(id)arg2;
- (id)schemesGroupedByStore:(id)arg1;
- (id)secretStoreForScheme:(id)arg1;
- (id)storeKeyForScheme:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

