//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class AudioSettingsTableViewHeaderFooterConfiguration, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface AudioSettingsTableViewHeaderFooter : UITableViewHeaderFooterView
{
    AudioSettingsTableViewHeaderFooterConfiguration *_configuration;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AudioSettingsTableViewHeaderFooterConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *title;
- (id)_initialConstraints;
- (void)_maps_commonInit;
- (id)initWithReuseIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

