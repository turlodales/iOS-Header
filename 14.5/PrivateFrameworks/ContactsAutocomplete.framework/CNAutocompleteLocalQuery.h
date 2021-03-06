//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNCancelable-Protocol.h>

@class CNAutocompleteFetchRequest, CNContactStore, NSString;
@protocol CNAutocompleteLocalQueryDelegate;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable>
{
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    CNContactStore *_contactFetcherStore;
    id <CNAutocompleteLocalQueryDelegate> _delegate;
}

+ (id)queryWithDelegate:(id)arg1;
+ (id)groupsQuery;
+ (id)peopleQuery;
- (void).cxx_destruct;
@property(retain) CNContactStore *contactFetcherStore; // @synthesize contactFetcherStore=_contactFetcherStore;
@property(retain) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain) CNAutocompleteFetchRequest *request; // @synthesize request=_request;
- (void)cancel;
- (id)searchableProperties;
- (id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2;
- (id)makeResultFactory;
- (id)fetchResults;
- (id)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

