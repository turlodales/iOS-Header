//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICLexiconSourcing-Protocol.h>

@class PPContactNameRecordLoadingDelegate, PPContactStore, PPNamedEntityRecordLoadingDelegate, PPNamedEntityStore, _ICLexiconManager;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting>
{
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void).cxx_destruct;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)_reloadNamedEntityDataAfterReset;
- (id)_makeNamedEntityDelegate;
- (id)_makeContactDelegate;
- (void)hibernate;
- (void)warmUp;
- (void)startLoadingWithManager:(id)arg1;
- (id)_makePPNamedEntityStore;
- (id)init;

@end

