//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsModelFetching-Protocol.h>

@class CNSchedulerProvider, NSString;
@protocol CNDowntimeWhitelistContainerFetching, CNScheduler, CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching;

@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching>
{
    id <CNUICoreContactStoreFacade> _contactStore;
    id <CNUICoreFamilyInfoFetching> _familyInfoFetcher;
    id <CNDowntimeWhitelistContainerFetching> _downtimeContainerFetcher;
    CNSchedulerProvider *_schedulerProvider;
}

+ (id)keysToFetch;
+ (long long)contactFormatterStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNSchedulerProvider *schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher; // @synthesize downtimeContainerFetcher=_downtimeContainerFetcher;
@property(readonly, nonatomic) id <CNUICoreFamilyInfoFetching> familyInfoFetcher; // @synthesize familyInfoFetcher=_familyInfoFetcher;
@property(readonly, nonatomic) id <CNUICoreContactStoreFacade> contactStore; // @synthesize contactStore=_contactStore;
- (id)allContactsModel;
- (id)modelBuilderForContacts:(id)arg1 familyInfo:(id)arg2;
- (id)modelBuilderForWhitelistedContacts:(id)arg1 familyInfo:(id)arg2;
- (id)allContacts;
- (id)whitelistedContactsModel;
@property(readonly, nonatomic) id <CNScheduler> backgroundOrImmediateScheduler;
- (id)initWithContactStoreFacade:(id)arg1 familyInfoFetcher:(id)arg2 downtimeContainerFetcher:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithDowntimeContainerFetcher:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

