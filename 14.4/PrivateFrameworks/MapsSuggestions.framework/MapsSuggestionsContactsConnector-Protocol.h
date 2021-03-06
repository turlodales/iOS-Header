//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CNContact, CNPostalAddress, MapsSuggestionsContacts, NSArray, NSString;

@protocol MapsSuggestionsContactsConnector <MapsSuggestionsObject>
- (NSString *)singleLineStringFromPostalAddress:(CNPostalAddress *)arg1 addCountryName:(_Bool)arg2;
- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id *)arg2;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)setDelegate:(MapsSuggestionsContacts *)arg1;
@end

