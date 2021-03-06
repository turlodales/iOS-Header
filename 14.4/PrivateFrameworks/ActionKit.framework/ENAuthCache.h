//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENAuthCacheEntry, NSMutableDictionary;

@interface ENAuthCache : NSObject
{
    NSMutableDictionary *_linkedCache;
    ENAuthCacheEntry *_businessCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ENAuthCacheEntry *businessCache; // @synthesize businessCache=_businessCache;
@property(retain, nonatomic) NSMutableDictionary *linkedCache; // @synthesize linkedCache=_linkedCache;
- (id)authenticationResultForBusiness;
- (void)setAuthenticationResultForBusiness:(id)arg1;
- (id)authenticationResultForLinkedNotebookGuid:(id)arg1;
- (void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2;
- (id)init;

@end

