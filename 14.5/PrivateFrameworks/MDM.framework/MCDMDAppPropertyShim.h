//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MDM/MCMDMAppItemsDataSource-Protocol.h>

@class DMFConnection, DMFFetchAppsRequest, DMFFetchAppsResultObject, NSArray, NSDictionary, NSSet, NSString;

@interface MCDMDAppPropertyShim : NSObject <MCMDMAppItemsDataSource>
{
    _Bool _shouldReturnManagedAppsOnly;
    NSSet *_appsRequested;
    NSSet *_itemsRequested;
    NSDictionary *_appItems;
    DMFConnection *_deviceManagementUserConnection;
    DMFFetchAppsRequest *_request;
    NSArray *_keysForRequest;
    DMFFetchAppsResultObject *_response;
}

+ (id)_dmdKeysToRequestToGetItems:(id)arg1;
+ (id)_itemKeyToDMDKeyMappingTable;
- (void).cxx_destruct;
@property(retain, nonatomic) DMFFetchAppsResultObject *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *keysForRequest; // @synthesize keysForRequest=_keysForRequest;
@property(retain, nonatomic) DMFFetchAppsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) DMFConnection *deviceManagementUserConnection; // @synthesize deviceManagementUserConnection=_deviceManagementUserConnection;
@property(copy, nonatomic) NSDictionary *appItems; // @synthesize appItems=_appItems;
@property(copy, nonatomic) NSSet *itemsRequested; // @synthesize itemsRequested=_itemsRequested;
@property(nonatomic) _Bool shouldReturnManagedAppsOnly; // @synthesize shouldReturnManagedAppsOnly=_shouldReturnManagedAppsOnly;
@property(copy, nonatomic) NSSet *appsRequested; // @synthesize appsRequested=_appsRequested;
- (id)_appDictionaryFromApp:(id)arg1;
- (void)_createAppItems;
- (void)_executeRequest;
- (void)_createKeysForRequest;
- (void)_createRequest;
- (void)fetchAppItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

