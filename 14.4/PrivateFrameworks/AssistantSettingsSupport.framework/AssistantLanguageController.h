//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListItemsController.h>

@class AssistantSettingsSignalEmitter, NSDate;

@interface AssistantLanguageController : PSListItemsController
{
    NSDate *_startDate;
    AssistantSettingsSignalEmitter *_signalEmitter;
}

+ (id)bundle;
- (void).cxx_destruct;
- (void)_signalDidSelectVoice;
- (void)languageCodeDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

