//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKProactiveGrammar : NSObject
{
}

+ (id)getEntities:(id)arg1;
+ (id)getOTAPathForRKBundle:(id)arg1;
+ (id)sharedManager;
- (id)copyAttributedTokenForText:(id)arg1 forLanguageModel:(void *)arg2 withLanguageCode:(id)arg3;
- (id)copyAttributedTokenForText:(id)arg1 forLanguage:(id)arg2;
- (id)getEquivalenceClass:(id)arg1;
- (void *)chineseTokenizer;
- (void *)getLanguageModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

