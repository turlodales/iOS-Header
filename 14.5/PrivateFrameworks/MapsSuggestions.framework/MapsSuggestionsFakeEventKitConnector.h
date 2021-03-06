//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsEventKitConnector-Protocol.h>

@class NSArray, NSDictionary, NSError, NSPredicate, NSString;
@protocol MapsSuggestionsEventKitConnectorDelegate;

@interface MapsSuggestionsFakeEventKitConnector : NSObject <MapsSuggestionsEventKitConnector>
{
    NSArray *_configuredVisibleCalendars;
    NSArray *_configuredCalendars;
    NSPredicate *_configuredPredicate;
    NSDictionary *_configuredEventsPerPredicate;
    NSDictionary *_configuredEventsPerIdentifier;
    NSError *_configuredError;
    _Bool _isListening;
    unsigned long long _calledRemoveEvent;
    id <MapsSuggestionsEventKitConnectorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MapsSuggestionsEventKitConnectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (_Bool)removeEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (id)visibleCalendars;
- (unsigned long long)calledRemoveEvent;
- (void)fireChange;
- (void)configureError:(id)arg1;
- (void)configureEventPerIdentifier:(id)arg1;
- (void)configureEventsPerPredicate:(id)arg1;
- (void)configurePredicate:(id)arg1;
- (void)configureEventCalendars:(id)arg1;
- (void)configureVisibleCalendars:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

