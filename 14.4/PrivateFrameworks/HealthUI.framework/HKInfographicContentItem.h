//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInfographicItem-Protocol.h>

@class NSAttributedString, NSString;

@interface HKInfographicContentItem : NSObject <HKInfographicItem>
{
    NSAttributedString *_titleString;
    NSAttributedString *_descriptionString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSAttributedString *titleString; // @synthesize titleString=_titleString;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

