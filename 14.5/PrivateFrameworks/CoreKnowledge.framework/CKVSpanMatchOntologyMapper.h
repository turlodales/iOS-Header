//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKVSpanMatchOntologyMapper : NSObject
{
}

+ (id)prettyPrintUSOGraph:(id)arg1;
+ (optional_c1adc4fa)_ontologyNodeEdgePairFromFieldType:(long long)arg1;
+ (id)_stringFromOntologyNodeEdgePair:(pair_530c4d38)arg1;
+ (id)_stringValueFromSpanMatch:(id)arg1;
+ (void)_setIdentifierOnEdgeNode:(id)arg1 withMetadata:(id)arg2;
+ (optional_c1adc4fa)_ontologyNodeEdgePairFromSpanMatch:(id)arg1;
+ (id)ontologyGraphFromSpanMatch:(id)arg1 withMetdata:(id)arg2;
+ (id)_ontologyLabelForMergedPersonFields:(id)arg1;
+ (id)_ontologyLabelFromSpanMatchingMergedFields:(id)arg1 itemType:(long long)arg2;
+ (id)ontologyLabelFromFieldType:(long long)arg1;
+ (id)matchingSpanNLV3FromSpanMatch:(id)arg1 withMetdata:(id)arg2;

@end

