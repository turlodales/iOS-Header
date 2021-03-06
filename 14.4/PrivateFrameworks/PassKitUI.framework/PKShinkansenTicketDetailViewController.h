//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTransitTicketDetailViewController.h>

#import <PassKitUI/PKTransitTicketDetailDataSource-Protocol.h>

@class NSMutableArray, NSString, PKFelicaPassProperties;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>
{
    NSMutableArray *_train1Titles;
    NSMutableArray *_train2Titles;
    NSMutableArray *_train1Values;
    NSMutableArray *_train2Values;
    PKFelicaPassProperties *_properties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKFelicaPassProperties *properties; // @synthesize properties=_properties;
- (void)_prepareLabelsAndValues;
- (id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(_Bool)arg2;
- (id)_transitTicketTitleForDetail:(unsigned long long)arg1;
- (id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (id)titleForLeg:(unsigned long long)arg1;
- (unsigned long long)numberOfLegs;
- (id)initWithFelicaProperty:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

