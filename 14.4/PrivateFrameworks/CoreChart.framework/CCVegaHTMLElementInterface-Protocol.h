//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreChart/JSExport-Protocol.h>

@class CCVegaCSSStyleDeclaration, JSValue, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol CCVegaHTMLElementInterface;

@protocol CCVegaHTMLElementInterface <JSExport>
@property(nonatomic) double clientHeight;
@property(nonatomic) double clientWidth;
@property(retain, nonatomic) NSObject<CCVegaHTMLElementInterface> *parentNode;
@property(retain, nonatomic) NSMutableDictionary *events;
@property(retain, nonatomic) NSString *tagName;
@property(retain, nonatomic) NSMutableArray *childNodes;
@property(retain, nonatomic) CCVegaCSSStyleDeclaration *style;
- (void)removeEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2;
- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)prependWithChild:(JSValue *)arg1;
- (NSObject<CCVegaHTMLElementInterface> *)appendWithChild:(JSValue *)arg1;
- (NSObject<CCVegaHTMLElementInterface> *)removeWithChild:(JSValue *)arg1;
- (void)recursiveSetSize:(struct CGSize)arg1;
- (NSDictionary *)getBoundingClientRect;
- (id)initWithTagName:(NSString *)arg1;

@optional
- (void)removeEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__removeEventListener:(id)arg3;
- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__addEventListener:(id)arg3;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;
- (NSObject<CCVegaHTMLElementInterface> *)prependWithChild:(JSValue *)arg1 __JS_EXPORT_AS__prepend:(id)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)appendWithChild:(JSValue *)arg1 __JS_EXPORT_AS__appendChild:(id)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)removeWithChild:(JSValue *)arg1 __JS_EXPORT_AS__removeChild:(id)arg2;
@end

