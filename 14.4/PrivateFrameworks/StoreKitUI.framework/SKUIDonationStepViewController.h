//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIDonationConfiguration, SKUIDonationViewController, SKUIGiftCharity;

__attribute__((visibility("hidden")))
@interface SKUIDonationStepViewController : UIViewController
{
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration; // @synthesize donationConfiguration=_configuration;
@property(readonly, nonatomic) SKUIGiftCharity *charity; // @synthesize charity=_charity;
@property(readonly, nonatomic) SKUIDonationViewController *donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end

