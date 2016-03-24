/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataUnit : NSObject <NSCopying> {
    NSAttributedString *_attributedSummaryAttribution;
    int _categoryIdentifier;
    NSString *_cautionaryText;
    NSDictionary *_chartingPredicatesByTimeScope;
    HKDataUnitChartingRules *_chartingRules;
    int _dataUnitIdentifier;
    NSPredicate *_defaultChartingPredicate;
    UIImage *_detailImage;
    NSString *_displayName;
    NSString *_embeddedDisplayName;
    NSSet *_keywords;
    NSString *_labelDisplayName;
    HKObjectType *_objectType;
    NSDictionary *_portraitPresentationOptionOverrides;
    unsigned int _portraitPresentationOptions;
    float _scalarValue;
    BOOL _shouldDisplayUnitStringOnYAxis;
    BOOL _shouldUseSingleSecondaryValue;
    BOOL _showAllDataHierarchically;
    NSDictionary *_singularUnitNameOverrides;
    NSString *_summary;
    BOOL _summaryAttributionHasLink;
    NSString *_summaryForPairedWatch;
    NSString *_titleEmbeddedDisplayName;
    NSString *_unitChangeCautionaryText;
    NSDictionary *_unitNameOverrides;
}

@property (nonatomic, readonly) BOOL allowsManualEntry;
@property (nonatomic, readonly) NSAttributedString *attributedSummaryAttribution;
@property (nonatomic, readonly) int categoryIdentifier;
@property (nonatomic, readonly) NSString *cautionaryText;
@property (nonatomic, readonly) HKDataUnitChartingRules *chartingRules;
@property (nonatomic, readonly) HKDataCategory *dataCategory;
@property (nonatomic, readonly) UIImage *dataUnitIcon;
@property (nonatomic, readonly) int dataUnitIdentifier;
@property (nonatomic, readonly) UIImage *detailImage;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *embeddedDisplayName;
@property (nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) BOOL isActivitySummary;
@property (nonatomic, readonly) BOOL isCharacteristic;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) NSString *labelDisplayName;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) NSString *listIconImageName;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) HKSampleType *recordSampleType;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) float scalarValue;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic) BOOL shouldDisplayUnitStringOnYAxis;
@property (nonatomic, readonly) BOOL shouldUseSingleSecondaryValue;
@property (nonatomic, readonly) BOOL showAllDataHierarchically;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) BOOL summaryAttributionHasLink;
@property (nonatomic, readonly) NSString *summaryForPairedWatch;
@property (nonatomic, readonly) NSString *titleEmbeddedDisplayName;
@property (nonatomic, readonly) NSString *unitChangeCautionaryText;
@property (nonatomic, readonly) UIImage *unitIcon;
@property (nonatomic, readonly) BOOL unitPreferencesRequireChangeConfirmation;

- (void).cxx_destruct;
- (void)_applyChartingProperties:(id)arg1;
- (void)_applyScalarValueWithDictionary:(id)arg1;
- (void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (void)_applyUnitNameOverrides:(id)arg1;
- (BOOL)_isActivitySummary;
- (BOOL)_isNikeFuel;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (BOOL)allowsManualEntry;
- (id)attributedSummaryAttribution;
- (int)categoryIdentifier;
- (id)cautionaryText;
- (id)chartingPredicateForTimeScope:(int)arg1;
- (id)chartingRules;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataCategory;
- (id)dataUnitIcon;
- (int)dataUnitIdentifier;
- (id)defaultValuePredicate;
- (id)description;
- (id)detailImage;
- (id)displayName;
- (id)embeddedDisplayName;
- (unsigned int)hash;
- (BOOL)hidden;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (BOOL)isActivitySummary;
- (BOOL)isCharacteristic;
- (BOOL)isEqual:(id)arg1;
- (id)keywords;
- (id)labelDisplayName;
- (id)listIcon;
- (id)listIconImageName;
- (id)objectType;
- (unsigned int)presentationOptionsForTimeScope:(int)arg1;
- (id)recordSampleType;
- (id)sampleType;
- (float)scalarValue;
- (void)setShouldDisplayUnitStringOnYAxis:(BOOL)arg1;
- (id)shareIcon;
- (BOOL)shouldDisplayUnitStringOnYAxis;
- (BOOL)shouldUseSingleSecondaryValue;
- (BOOL)showAllDataHierarchically;
- (id)singularUnitDisplayNameOverrideForUnit:(id)arg1;
- (id)summary;
- (BOOL)summaryAttributionHasLink;
- (id)summaryForPairedWatch;
- (id)titleEmbeddedDisplayName;
- (id)unitChangeCautionaryText;
- (id)unitDisplayNameOverrideForUnit:(id)arg1;
- (id)unitIcon;
- (BOOL)unitPreferencesRequireChangeConfirmation;

@end