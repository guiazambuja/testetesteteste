#ifdef RELEASE

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base_gcmessages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

	const ::google::protobuf::Descriptor* CGCStorePurchaseInit_LineItem_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CGCStorePurchaseInit_LineItem_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseInit_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseInit_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseInitResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseInitResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOPartyInvite_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOPartyInvite_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOLobbyInvite_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOLobbyInvite_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgSystemBroadcast_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgSystemBroadcast_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgInviteToParty_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgInviteToParty_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgInvitationCreated_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgInvitationCreated_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgPartyInviteResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgPartyInviteResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgKickFromParty_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgKickFromParty_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgLeaveParty_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgLeaveParty_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgServerAvailable_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgServerAvailable_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgLANServerAvailable_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgLANServerAvailable_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconGameAccountClient_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconGameAccountClient_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOItemCriteriaCondition_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOItemCriteriaCondition_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOItemCriteria_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOItemCriteria_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOItemRecipe_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOItemRecipe_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgDevNewItemRequest_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgDevNewItemRequest_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgIncrementKillCountAttribute_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgIncrementKillCountAttribute_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgApplySticker_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgApplySticker_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgApplyStatTrakSwap_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgApplyStatTrakSwap_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgApplyStrangePart_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgApplyStrangePart_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgApplyPennantUpgrade_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgApplyPennantUpgrade_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgApplyEggEssence_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgApplyEggEssence_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItemAttribute_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItemAttribute_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItemEquipped_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItemEquipped_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItem_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItem_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgAdjustItemEquippedState_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgAdjustItemEquippedState_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgSortItems_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgSortItems_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconClaimCode_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconClaimCode_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgStoreGetUserData_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgStoreGetUserData_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgStoreGetUserDataResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgStoreGetUserDataResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgUpdateItemSchema_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgUpdateItemSchema_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCError_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCError_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgRequestInventoryRefresh_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgRequestInventoryRefresh_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgConVarValue_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgConVarValue_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgReplicateConVars_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgReplicateConVars_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgUseItem_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgUseItem_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgReplayUploadedToYouTube_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgReplayUploadedToYouTube_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgConsumableExhausted_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgConsumableExhausted_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgItemAcknowledged__DEPRECATED_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgItemAcknowledged__DEPRECATED_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgSetItemPositions_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgSetItemPositions_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgSetItemPositions_ItemPosition_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgSetItemPositions_ItemPosition_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCReportAbuse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCReportAbuse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCReportAbuseResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCReportAbuseResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCNameItemNotification_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCNameItemNotification_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCClientDisplayNotification_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCClientDisplayNotification_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCShowItemsPickedUp_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCShowItemsPickedUp_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCIncrementKillCountResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCIncrementKillCountResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItemDropRateBonus_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItemDropRateBonus_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItemLeagueViewPass_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItemLeagueViewPass_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconItemEventTicket_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconItemEventTicket_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCItemPreviewItemBoughtNotification_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCItemPreviewItemBoughtNotification_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseCancel_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseCancel_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseCancelResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseCancelResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseFinalize_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseFinalize_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCStorePurchaseFinalizeResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCStorePurchaseFinalizeResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCBannedWordListRequest_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCBannedWordListRequest_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCRequestAnnouncements_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCRequestAnnouncements_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCRequestAnnouncementsResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCRequestAnnouncementsResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCBannedWord_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCBannedWord_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCBannedWordListResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCBannedWordListResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCBannedWordListBroadcast_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCBannedWordListBroadcast_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCBannedWordListUpdated_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCBannedWordListUpdated_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CSOEconDefaultEquippedDefinitionInstanceClient_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCDirtySDOCache_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCDirtySDOCache_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCDirtyMultipleSDOCache_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCDirtyMultipleSDOCache_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCCollectItem_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCCollectItem_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgSDONoMemcached_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgSDONoMemcached_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCUpdateSQLKeyValue_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCUpdateSQLKeyValue_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCIsTrustedServer_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCIsTrustedServer_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCIsTrustedServerResponse_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCIsTrustedServerResponse_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCBroadcastConsoleCommand_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCBroadcastConsoleCommand_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCServerVersionUpdated_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCServerVersionUpdated_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCClientVersionUpdated_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCClientVersionUpdated_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCWebAPIAccountChanged_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCWebAPIAccountChanged_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGCToGCRequestPassportItemGrant_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGCToGCRequestPassportItemGrant_reflection_ = NULL;
	const ::google::protobuf::Descriptor* CMsgGameServerInfo_descriptor_ = NULL;
	const ::google::protobuf::internal::GeneratedMessageReflection*
		CMsgGameServerInfo_reflection_ = NULL;
	const ::google::protobuf::EnumDescriptor* CMsgGameServerInfo_ServerType_descriptor_ = NULL;
	const ::google::protobuf::EnumDescriptor* EGCBaseMsg_descriptor_ = NULL;
	const ::google::protobuf::EnumDescriptor* EGCBaseProtoObjectTypes_descriptor_ = NULL;
	const ::google::protobuf::EnumDescriptor* GC_BannedWordType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_5fgcmessages_2eproto() {
	protobuf_AddDesc_base_5fgcmessages_2eproto();
	const ::google::protobuf::FileDescriptor* file =
		::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
			"base_gcmessages.proto");
	GOOGLE_CHECK(file != NULL);
	CGCStorePurchaseInit_LineItem_descriptor_ = file->message_type(0);
	static const int CGCStorePurchaseInit_LineItem_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, item_def_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, quantity_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, cost_in_local_currency_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, purchase_type_),
	};
	CGCStorePurchaseInit_LineItem_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CGCStorePurchaseInit_LineItem_descriptor_,
			CGCStorePurchaseInit_LineItem::default_instance_,
			CGCStorePurchaseInit_LineItem_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CGCStorePurchaseInit_LineItem, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CGCStorePurchaseInit_LineItem));
	CMsgGCStorePurchaseInit_descriptor_ = file->message_type(1);
	static const int CMsgGCStorePurchaseInit_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, country_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, language_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, currency_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, line_items_),
	};
	CMsgGCStorePurchaseInit_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseInit_descriptor_,
			CMsgGCStorePurchaseInit::default_instance_,
			CMsgGCStorePurchaseInit_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInit, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseInit));
	CMsgGCStorePurchaseInitResponse_descriptor_ = file->message_type(2);
	static const int CMsgGCStorePurchaseInitResponse_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, result_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, txn_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, url_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, item_ids_),
	};
	CMsgGCStorePurchaseInitResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseInitResponse_descriptor_,
			CMsgGCStorePurchaseInitResponse::default_instance_,
			CMsgGCStorePurchaseInitResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseInitResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseInitResponse));
	CSOPartyInvite_descriptor_ = file->message_type(3);
	static const int CSOPartyInvite_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOPartyInvite, group_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOPartyInvite, sender_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOPartyInvite, sender_name_),
	};
	CSOPartyInvite_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOPartyInvite_descriptor_,
			CSOPartyInvite::default_instance_,
			CSOPartyInvite_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOPartyInvite, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOPartyInvite, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOPartyInvite));
	CSOLobbyInvite_descriptor_ = file->message_type(4);
	static const int CSOLobbyInvite_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOLobbyInvite, group_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOLobbyInvite, sender_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOLobbyInvite, sender_name_),
	};
	CSOLobbyInvite_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOLobbyInvite_descriptor_,
			CSOLobbyInvite::default_instance_,
			CSOLobbyInvite_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOLobbyInvite, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOLobbyInvite, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOLobbyInvite));
	CMsgSystemBroadcast_descriptor_ = file->message_type(5);
	static const int CMsgSystemBroadcast_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSystemBroadcast, message_),
	};
	CMsgSystemBroadcast_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgSystemBroadcast_descriptor_,
			CMsgSystemBroadcast::default_instance_,
			CMsgSystemBroadcast_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSystemBroadcast, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSystemBroadcast, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgSystemBroadcast));
	CMsgInviteToParty_descriptor_ = file->message_type(6);
	static const int CMsgInviteToParty_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInviteToParty, steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInviteToParty, client_version_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInviteToParty, team_invite_),
	};
	CMsgInviteToParty_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgInviteToParty_descriptor_,
			CMsgInviteToParty::default_instance_,
			CMsgInviteToParty_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInviteToParty, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInviteToParty, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgInviteToParty));
	CMsgInvitationCreated_descriptor_ = file->message_type(7);
	static const int CMsgInvitationCreated_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInvitationCreated, group_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInvitationCreated, steam_id_),
	};
	CMsgInvitationCreated_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgInvitationCreated_descriptor_,
			CMsgInvitationCreated::default_instance_,
			CMsgInvitationCreated_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInvitationCreated, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgInvitationCreated, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgInvitationCreated));
	CMsgPartyInviteResponse_descriptor_ = file->message_type(8);
	static const int CMsgPartyInviteResponse_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, party_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, accept_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, client_version_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, team_invite_),
	};
	CMsgPartyInviteResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgPartyInviteResponse_descriptor_,
			CMsgPartyInviteResponse::default_instance_,
			CMsgPartyInviteResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgPartyInviteResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgPartyInviteResponse));
	CMsgKickFromParty_descriptor_ = file->message_type(9);
	static const int CMsgKickFromParty_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgKickFromParty, steam_id_),
	};
	CMsgKickFromParty_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgKickFromParty_descriptor_,
			CMsgKickFromParty::default_instance_,
			CMsgKickFromParty_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgKickFromParty, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgKickFromParty, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgKickFromParty));
	CMsgLeaveParty_descriptor_ = file->message_type(10);
	static const int CMsgLeaveParty_offsets_[1] = {
	};
	CMsgLeaveParty_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgLeaveParty_descriptor_,
			CMsgLeaveParty::default_instance_,
			CMsgLeaveParty_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgLeaveParty, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgLeaveParty, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgLeaveParty));
	CMsgServerAvailable_descriptor_ = file->message_type(11);
	static const int CMsgServerAvailable_offsets_[1] = {
	};
	CMsgServerAvailable_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgServerAvailable_descriptor_,
			CMsgServerAvailable::default_instance_,
			CMsgServerAvailable_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgServerAvailable, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgServerAvailable, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgServerAvailable));
	CMsgLANServerAvailable_descriptor_ = file->message_type(12);
	static const int CMsgLANServerAvailable_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgLANServerAvailable, lobby_id_),
	};
	CMsgLANServerAvailable_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgLANServerAvailable_descriptor_,
			CMsgLANServerAvailable::default_instance_,
			CMsgLANServerAvailable_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgLANServerAvailable, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgLANServerAvailable, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgLANServerAvailable));
	CSOEconGameAccountClient_descriptor_ = file->message_type(13);
	static const int CSOEconGameAccountClient_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, additional_backpack_slots_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, bonus_xp_timestamp_refresh_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, bonus_xp_usedflags_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, elevated_state_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, elevated_timestamp_),
	};
	CSOEconGameAccountClient_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconGameAccountClient_descriptor_,
			CSOEconGameAccountClient::default_instance_,
			CSOEconGameAccountClient_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconGameAccountClient, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconGameAccountClient));
	CSOItemCriteriaCondition_descriptor_ = file->message_type(14);
	static const int CSOItemCriteriaCondition_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, op_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, field_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, required_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, float_value_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, string_value_),
	};
	CSOItemCriteriaCondition_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOItemCriteriaCondition_descriptor_,
			CSOItemCriteriaCondition::default_instance_,
			CSOItemCriteriaCondition_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteriaCondition, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOItemCriteriaCondition));
	CSOItemCriteria_descriptor_ = file->message_type(15);
	static const int CSOItemCriteria_offsets_[11] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_level_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_quality_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_level_set_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_quality_set_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, initial_inventory_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, initial_quantity_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, ignore_enabled_flag_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, conditions_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_rarity_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, item_rarity_set_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, recent_only_),
	};
	CSOItemCriteria_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOItemCriteria_descriptor_,
			CSOItemCriteria::default_instance_,
			CSOItemCriteria_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemCriteria, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOItemCriteria));
	CSOItemRecipe_descriptor_ = file->message_type(16);
	static const int CSOItemRecipe_offsets_[19] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, def_index_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, name_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, n_a_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, desc_inputs_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, desc_outputs_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, di_a_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, di_b_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, di_c_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, do_a_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, do_b_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, do_c_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, requires_all_same_class_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, requires_all_same_slot_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, class_usage_for_output_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, slot_usage_for_output_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, set_for_output_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, input_items_criteria_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, output_items_criteria_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, input_item_dupe_counts_),
	};
	CSOItemRecipe_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOItemRecipe_descriptor_,
			CSOItemRecipe::default_instance_,
			CSOItemRecipe_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOItemRecipe, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOItemRecipe));
	CMsgDevNewItemRequest_descriptor_ = file->message_type(17);
	static const int CMsgDevNewItemRequest_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgDevNewItemRequest, receiver_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgDevNewItemRequest, criteria_),
	};
	CMsgDevNewItemRequest_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgDevNewItemRequest_descriptor_,
			CMsgDevNewItemRequest::default_instance_,
			CMsgDevNewItemRequest_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgDevNewItemRequest, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgDevNewItemRequest, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgDevNewItemRequest));
	CMsgIncrementKillCountAttribute_descriptor_ = file->message_type(18);
	static const int CMsgIncrementKillCountAttribute_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, killer_account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, victim_account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, event_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, amount_),
	};
	CMsgIncrementKillCountAttribute_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgIncrementKillCountAttribute_descriptor_,
			CMsgIncrementKillCountAttribute::default_instance_,
			CMsgIncrementKillCountAttribute_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgIncrementKillCountAttribute, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgIncrementKillCountAttribute));
	CMsgApplySticker_descriptor_ = file->message_type(19);
	static const int CMsgApplySticker_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, sticker_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, item_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, sticker_slot_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, baseitem_defidx_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, sticker_wear_),
	};
	CMsgApplySticker_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgApplySticker_descriptor_,
			CMsgApplySticker::default_instance_,
			CMsgApplySticker_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplySticker, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgApplySticker));
	CMsgApplyStatTrakSwap_descriptor_ = file->message_type(20);
	static const int CMsgApplyStatTrakSwap_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStatTrakSwap, tool_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStatTrakSwap, item_1_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStatTrakSwap, item_2_item_id_),
	};
	CMsgApplyStatTrakSwap_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgApplyStatTrakSwap_descriptor_,
			CMsgApplyStatTrakSwap::default_instance_,
			CMsgApplyStatTrakSwap_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStatTrakSwap, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStatTrakSwap, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgApplyStatTrakSwap));
	CMsgApplyStrangePart_descriptor_ = file->message_type(21);
	static const int CMsgApplyStrangePart_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStrangePart, strange_part_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStrangePart, item_item_id_),
	};
	CMsgApplyStrangePart_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgApplyStrangePart_descriptor_,
			CMsgApplyStrangePart::default_instance_,
			CMsgApplyStrangePart_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStrangePart, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyStrangePart, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgApplyStrangePart));
	CMsgApplyPennantUpgrade_descriptor_ = file->message_type(22);
	static const int CMsgApplyPennantUpgrade_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyPennantUpgrade, upgrade_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyPennantUpgrade, pennant_item_id_),
	};
	CMsgApplyPennantUpgrade_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgApplyPennantUpgrade_descriptor_,
			CMsgApplyPennantUpgrade::default_instance_,
			CMsgApplyPennantUpgrade_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyPennantUpgrade, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyPennantUpgrade, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgApplyPennantUpgrade));
	CMsgApplyEggEssence_descriptor_ = file->message_type(23);
	static const int CMsgApplyEggEssence_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyEggEssence, essence_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyEggEssence, egg_item_id_),
	};
	CMsgApplyEggEssence_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgApplyEggEssence_descriptor_,
			CMsgApplyEggEssence::default_instance_,
			CMsgApplyEggEssence_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyEggEssence, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgApplyEggEssence, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgApplyEggEssence));
	CSOEconItemAttribute_descriptor_ = file->message_type(24);
	static const int CSOEconItemAttribute_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemAttribute, def_index_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemAttribute, value_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemAttribute, value_bytes_),
	};
	CSOEconItemAttribute_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItemAttribute_descriptor_,
			CSOEconItemAttribute::default_instance_,
			CSOEconItemAttribute_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemAttribute, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemAttribute, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItemAttribute));
	CSOEconItemEquipped_descriptor_ = file->message_type(25);
	static const int CSOEconItemEquipped_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEquipped, new_class_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEquipped, new_slot_),
	};
	CSOEconItemEquipped_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItemEquipped_descriptor_,
			CSOEconItemEquipped::default_instance_,
			CSOEconItemEquipped_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEquipped, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEquipped, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItemEquipped));
	CSOEconItem_descriptor_ = file->message_type(26);
	static const int CSOEconItem_offsets_[18] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, inventory_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, def_index_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, quantity_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, level_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, quality_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, flags_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, origin_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, custom_name_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, custom_desc_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, attribute_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, interior_item_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, in_use_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, style_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, original_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, equipped_state_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, rarity_),
	};
	CSOEconItem_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItem_descriptor_,
			CSOEconItem::default_instance_,
			CSOEconItem_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItem, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItem));
	CMsgAdjustItemEquippedState_descriptor_ = file->message_type(27);
	static const int CMsgAdjustItemEquippedState_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, new_class_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, new_slot_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, swap_),
	};
	CMsgAdjustItemEquippedState_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgAdjustItemEquippedState_descriptor_,
			CMsgAdjustItemEquippedState::default_instance_,
			CMsgAdjustItemEquippedState_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgAdjustItemEquippedState, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgAdjustItemEquippedState));
	CMsgSortItems_descriptor_ = file->message_type(28);
	static const int CMsgSortItems_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSortItems, sort_type_),
	};
	CMsgSortItems_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgSortItems_descriptor_,
			CMsgSortItems::default_instance_,
			CMsgSortItems_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSortItems, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSortItems, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgSortItems));
	CSOEconClaimCode_descriptor_ = file->message_type(29);
	static const int CSOEconClaimCode_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, code_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, time_acquired_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, code_),
	};
	CSOEconClaimCode_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconClaimCode_descriptor_,
			CSOEconClaimCode::default_instance_,
			CSOEconClaimCode_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconClaimCode, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconClaimCode));
	CMsgStoreGetUserData_descriptor_ = file->message_type(30);
	static const int CMsgStoreGetUserData_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserData, price_sheet_version_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserData, currency_),
	};
	CMsgStoreGetUserData_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgStoreGetUserData_descriptor_,
			CMsgStoreGetUserData::default_instance_,
			CMsgStoreGetUserData_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserData, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserData, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgStoreGetUserData));
	CMsgStoreGetUserDataResponse_descriptor_ = file->message_type(31);
	static const int CMsgStoreGetUserDataResponse_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, result_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, currency_deprecated_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, country_deprecated_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, price_sheet_version_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, price_sheet_),
	};
	CMsgStoreGetUserDataResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgStoreGetUserDataResponse_descriptor_,
			CMsgStoreGetUserDataResponse::default_instance_,
			CMsgStoreGetUserDataResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgStoreGetUserDataResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgStoreGetUserDataResponse));
	CMsgUpdateItemSchema_descriptor_ = file->message_type(32);
	static const int CMsgUpdateItemSchema_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, items_game_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, item_schema_version_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, items_game_url_deprecated2013_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, items_game_url_),
	};
	CMsgUpdateItemSchema_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgUpdateItemSchema_descriptor_,
			CMsgUpdateItemSchema::default_instance_,
			CMsgUpdateItemSchema_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUpdateItemSchema, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgUpdateItemSchema));
	CMsgGCError_descriptor_ = file->message_type(33);
	static const int CMsgGCError_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCError, error_text_),
	};
	CMsgGCError_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCError_descriptor_,
			CMsgGCError::default_instance_,
			CMsgGCError_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCError, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCError, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCError));
	CMsgRequestInventoryRefresh_descriptor_ = file->message_type(34);
	static const int CMsgRequestInventoryRefresh_offsets_[1] = {
	};
	CMsgRequestInventoryRefresh_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgRequestInventoryRefresh_descriptor_,
			CMsgRequestInventoryRefresh::default_instance_,
			CMsgRequestInventoryRefresh_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgRequestInventoryRefresh, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgRequestInventoryRefresh, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgRequestInventoryRefresh));
	CMsgConVarValue_descriptor_ = file->message_type(35);
	static const int CMsgConVarValue_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConVarValue, name_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConVarValue, value_),
	};
	CMsgConVarValue_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgConVarValue_descriptor_,
			CMsgConVarValue::default_instance_,
			CMsgConVarValue_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConVarValue, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConVarValue, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgConVarValue));
	CMsgReplicateConVars_descriptor_ = file->message_type(36);
	static const int CMsgReplicateConVars_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplicateConVars, convars_),
	};
	CMsgReplicateConVars_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgReplicateConVars_descriptor_,
			CMsgReplicateConVars::default_instance_,
			CMsgReplicateConVars_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplicateConVars, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplicateConVars, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgReplicateConVars));
	CMsgUseItem_descriptor_ = file->message_type(37);
	static const int CMsgUseItem_offsets_[5] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, target_steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, gift__potential_targets_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, duel__class_lock_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, initiator_steam_id_),
	};
	CMsgUseItem_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgUseItem_descriptor_,
			CMsgUseItem::default_instance_,
			CMsgUseItem_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgUseItem, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgUseItem));
	CMsgReplayUploadedToYouTube_descriptor_ = file->message_type(38);
	static const int CMsgReplayUploadedToYouTube_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplayUploadedToYouTube, youtube_url_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplayUploadedToYouTube, youtube_account_name_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplayUploadedToYouTube, session_id_),
	};
	CMsgReplayUploadedToYouTube_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgReplayUploadedToYouTube_descriptor_,
			CMsgReplayUploadedToYouTube::default_instance_,
			CMsgReplayUploadedToYouTube_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplayUploadedToYouTube, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgReplayUploadedToYouTube, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgReplayUploadedToYouTube));
	CMsgConsumableExhausted_descriptor_ = file->message_type(39);
	static const int CMsgConsumableExhausted_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConsumableExhausted, item_def_id_),
	};
	CMsgConsumableExhausted_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgConsumableExhausted_descriptor_,
			CMsgConsumableExhausted::default_instance_,
			CMsgConsumableExhausted_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConsumableExhausted, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgConsumableExhausted, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgConsumableExhausted));
	CMsgItemAcknowledged__DEPRECATED_descriptor_ = file->message_type(40);
	static const int CMsgItemAcknowledged__DEPRECATED_offsets_[7] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, inventory_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, def_index_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, quality_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, rarity_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, origin_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, item_id_),
	};
	CMsgItemAcknowledged__DEPRECATED_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgItemAcknowledged__DEPRECATED_descriptor_,
			CMsgItemAcknowledged__DEPRECATED::default_instance_,
			CMsgItemAcknowledged__DEPRECATED_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgItemAcknowledged__DEPRECATED, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgItemAcknowledged__DEPRECATED));
	CMsgSetItemPositions_descriptor_ = file->message_type(41);
	static const int CMsgSetItemPositions_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions, item_positions_),
	};
	CMsgSetItemPositions_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgSetItemPositions_descriptor_,
			CMsgSetItemPositions::default_instance_,
			CMsgSetItemPositions_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgSetItemPositions));
	CMsgSetItemPositions_ItemPosition_descriptor_ = CMsgSetItemPositions_descriptor_->nested_type(0);
	static const int CMsgSetItemPositions_ItemPosition_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions_ItemPosition, legacy_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions_ItemPosition, position_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions_ItemPosition, item_id_),
	};
	CMsgSetItemPositions_ItemPosition_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgSetItemPositions_ItemPosition_descriptor_,
			CMsgSetItemPositions_ItemPosition::default_instance_,
			CMsgSetItemPositions_ItemPosition_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions_ItemPosition, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSetItemPositions_ItemPosition, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgSetItemPositions_ItemPosition));
	CMsgGCReportAbuse_descriptor_ = file->message_type(42);
	static const int CMsgGCReportAbuse_offsets_[7] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, target_steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, description_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, gid_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, abuse_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, content_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, target_game_server_ip_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, target_game_server_port_),
	};
	CMsgGCReportAbuse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCReportAbuse_descriptor_,
			CMsgGCReportAbuse::default_instance_,
			CMsgGCReportAbuse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCReportAbuse));
	CMsgGCReportAbuseResponse_descriptor_ = file->message_type(43);
	static const int CMsgGCReportAbuseResponse_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuseResponse, target_steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuseResponse, result_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuseResponse, error_message_),
	};
	CMsgGCReportAbuseResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCReportAbuseResponse_descriptor_,
			CMsgGCReportAbuseResponse::default_instance_,
			CMsgGCReportAbuseResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuseResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCReportAbuseResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCReportAbuseResponse));
	CMsgGCNameItemNotification_descriptor_ = file->message_type(44);
	static const int CMsgGCNameItemNotification_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCNameItemNotification, player_steamid_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCNameItemNotification, item_def_index_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCNameItemNotification, item_name_custom_),
	};
	CMsgGCNameItemNotification_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCNameItemNotification_descriptor_,
			CMsgGCNameItemNotification::default_instance_,
			CMsgGCNameItemNotification_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCNameItemNotification, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCNameItemNotification, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCNameItemNotification));
	CMsgGCClientDisplayNotification_descriptor_ = file->message_type(45);
	static const int CMsgGCClientDisplayNotification_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, notification_title_localization_key_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, notification_body_localization_key_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, body_substring_keys_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, body_substring_values_),
	};
	CMsgGCClientDisplayNotification_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCClientDisplayNotification_descriptor_,
			CMsgGCClientDisplayNotification::default_instance_,
			CMsgGCClientDisplayNotification_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientDisplayNotification, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCClientDisplayNotification));
	CMsgGCShowItemsPickedUp_descriptor_ = file->message_type(46);
	static const int CMsgGCShowItemsPickedUp_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCShowItemsPickedUp, player_steamid_),
	};
	CMsgGCShowItemsPickedUp_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCShowItemsPickedUp_descriptor_,
			CMsgGCShowItemsPickedUp::default_instance_,
			CMsgGCShowItemsPickedUp_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCShowItemsPickedUp, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCShowItemsPickedUp, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCShowItemsPickedUp));
	CMsgGCIncrementKillCountResponse_descriptor_ = file->message_type(47);
	static const int CMsgGCIncrementKillCountResponse_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, killer_account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, num_kills_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, item_def_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, level_type_),
	};
	CMsgGCIncrementKillCountResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCIncrementKillCountResponse_descriptor_,
			CMsgGCIncrementKillCountResponse::default_instance_,
			CMsgGCIncrementKillCountResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCIncrementKillCountResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCIncrementKillCountResponse));
	CSOEconItemDropRateBonus_descriptor_ = file->message_type(48);
	static const int CSOEconItemDropRateBonus_offsets_[6] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, expiration_date_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, bonus_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, bonus_count_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, def_index_),
	};
	CSOEconItemDropRateBonus_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItemDropRateBonus_descriptor_,
			CSOEconItemDropRateBonus::default_instance_,
			CSOEconItemDropRateBonus_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemDropRateBonus, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItemDropRateBonus));
	CSOEconItemLeagueViewPass_descriptor_ = file->message_type(49);
	static const int CSOEconItemLeagueViewPass_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, league_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, admin_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, itemindex_),
	};
	CSOEconItemLeagueViewPass_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItemLeagueViewPass_descriptor_,
			CSOEconItemLeagueViewPass::default_instance_,
			CSOEconItemLeagueViewPass_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemLeagueViewPass, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItemLeagueViewPass));
	CSOEconItemEventTicket_descriptor_ = file->message_type(50);
	static const int CSOEconItemEventTicket_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEventTicket, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEventTicket, event_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEventTicket, item_id_),
	};
	CSOEconItemEventTicket_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconItemEventTicket_descriptor_,
			CSOEconItemEventTicket::default_instance_,
			CSOEconItemEventTicket_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEventTicket, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconItemEventTicket, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconItemEventTicket));
	CMsgGCItemPreviewItemBoughtNotification_descriptor_ = file->message_type(51);
	static const int CMsgGCItemPreviewItemBoughtNotification_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCItemPreviewItemBoughtNotification, item_def_index_),
	};
	CMsgGCItemPreviewItemBoughtNotification_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCItemPreviewItemBoughtNotification_descriptor_,
			CMsgGCItemPreviewItemBoughtNotification::default_instance_,
			CMsgGCItemPreviewItemBoughtNotification_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCItemPreviewItemBoughtNotification, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCItemPreviewItemBoughtNotification, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCItemPreviewItemBoughtNotification));
	CMsgGCStorePurchaseCancel_descriptor_ = file->message_type(52);
	static const int CMsgGCStorePurchaseCancel_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancel, txn_id_),
	};
	CMsgGCStorePurchaseCancel_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseCancel_descriptor_,
			CMsgGCStorePurchaseCancel::default_instance_,
			CMsgGCStorePurchaseCancel_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancel, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancel, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseCancel));
	CMsgGCStorePurchaseCancelResponse_descriptor_ = file->message_type(53);
	static const int CMsgGCStorePurchaseCancelResponse_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancelResponse, result_),
	};
	CMsgGCStorePurchaseCancelResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseCancelResponse_descriptor_,
			CMsgGCStorePurchaseCancelResponse::default_instance_,
			CMsgGCStorePurchaseCancelResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancelResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseCancelResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseCancelResponse));
	CMsgGCStorePurchaseFinalize_descriptor_ = file->message_type(54);
	static const int CMsgGCStorePurchaseFinalize_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalize, txn_id_),
	};
	CMsgGCStorePurchaseFinalize_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseFinalize_descriptor_,
			CMsgGCStorePurchaseFinalize::default_instance_,
			CMsgGCStorePurchaseFinalize_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalize, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalize, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseFinalize));
	CMsgGCStorePurchaseFinalizeResponse_descriptor_ = file->message_type(55);
	static const int CMsgGCStorePurchaseFinalizeResponse_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalizeResponse, result_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalizeResponse, item_ids_),
	};
	CMsgGCStorePurchaseFinalizeResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCStorePurchaseFinalizeResponse_descriptor_,
			CMsgGCStorePurchaseFinalizeResponse::default_instance_,
			CMsgGCStorePurchaseFinalizeResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalizeResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCStorePurchaseFinalizeResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCStorePurchaseFinalizeResponse));
	CMsgGCBannedWordListRequest_descriptor_ = file->message_type(56);
	static const int CMsgGCBannedWordListRequest_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListRequest, ban_list_group_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListRequest, word_id_),
	};
	CMsgGCBannedWordListRequest_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCBannedWordListRequest_descriptor_,
			CMsgGCBannedWordListRequest::default_instance_,
			CMsgGCBannedWordListRequest_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListRequest, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListRequest, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCBannedWordListRequest));
	CMsgGCRequestAnnouncements_descriptor_ = file->message_type(57);
	static const int CMsgGCRequestAnnouncements_offsets_[1] = {
	};
	CMsgGCRequestAnnouncements_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCRequestAnnouncements_descriptor_,
			CMsgGCRequestAnnouncements::default_instance_,
			CMsgGCRequestAnnouncements_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncements, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncements, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCRequestAnnouncements));
	CMsgGCRequestAnnouncementsResponse_descriptor_ = file->message_type(58);
	static const int CMsgGCRequestAnnouncementsResponse_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, announcement_title_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, announcement_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, nextmatch_title_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, nextmatch_),
	};
	CMsgGCRequestAnnouncementsResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCRequestAnnouncementsResponse_descriptor_,
			CMsgGCRequestAnnouncementsResponse::default_instance_,
			CMsgGCRequestAnnouncementsResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCRequestAnnouncementsResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCRequestAnnouncementsResponse));
	CMsgGCBannedWord_descriptor_ = file->message_type(59);
	static const int CMsgGCBannedWord_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWord, word_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWord, word_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWord, word_),
	};
	CMsgGCBannedWord_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCBannedWord_descriptor_,
			CMsgGCBannedWord::default_instance_,
			CMsgGCBannedWord_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWord, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWord, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCBannedWord));
	CMsgGCBannedWordListResponse_descriptor_ = file->message_type(60);
	static const int CMsgGCBannedWordListResponse_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListResponse, ban_list_group_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListResponse, word_list_),
	};
	CMsgGCBannedWordListResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCBannedWordListResponse_descriptor_,
			CMsgGCBannedWordListResponse::default_instance_,
			CMsgGCBannedWordListResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCBannedWordListResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCBannedWordListResponse));
	CMsgGCToGCBannedWordListBroadcast_descriptor_ = file->message_type(61);
	static const int CMsgGCToGCBannedWordListBroadcast_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListBroadcast, broadcast_),
	};
	CMsgGCToGCBannedWordListBroadcast_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCBannedWordListBroadcast_descriptor_,
			CMsgGCToGCBannedWordListBroadcast::default_instance_,
			CMsgGCToGCBannedWordListBroadcast_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListBroadcast, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListBroadcast, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCBannedWordListBroadcast));
	CMsgGCToGCBannedWordListUpdated_descriptor_ = file->message_type(62);
	static const int CMsgGCToGCBannedWordListUpdated_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListUpdated, group_id_),
	};
	CMsgGCToGCBannedWordListUpdated_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCBannedWordListUpdated_descriptor_,
			CMsgGCToGCBannedWordListUpdated::default_instance_,
			CMsgGCToGCBannedWordListUpdated_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListUpdated, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBannedWordListUpdated, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCBannedWordListUpdated));
	CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_ = file->message_type(63);
	static const int CSOEconDefaultEquippedDefinitionInstanceClient_offsets_[4] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, account_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, item_definition_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, class_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, slot_id_),
	};
	CSOEconDefaultEquippedDefinitionInstanceClient_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_,
			CSOEconDefaultEquippedDefinitionInstanceClient::default_instance_,
			CSOEconDefaultEquippedDefinitionInstanceClient_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSOEconDefaultEquippedDefinitionInstanceClient, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CSOEconDefaultEquippedDefinitionInstanceClient));
	CMsgGCToGCDirtySDOCache_descriptor_ = file->message_type(64);
	static const int CMsgGCToGCDirtySDOCache_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtySDOCache, sdo_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtySDOCache, key_uint64_),
	};
	CMsgGCToGCDirtySDOCache_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCDirtySDOCache_descriptor_,
			CMsgGCToGCDirtySDOCache::default_instance_,
			CMsgGCToGCDirtySDOCache_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtySDOCache, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtySDOCache, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCDirtySDOCache));
	CMsgGCToGCDirtyMultipleSDOCache_descriptor_ = file->message_type(65);
	static const int CMsgGCToGCDirtyMultipleSDOCache_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtyMultipleSDOCache, sdo_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtyMultipleSDOCache, key_uint64_),
	};
	CMsgGCToGCDirtyMultipleSDOCache_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCDirtyMultipleSDOCache_descriptor_,
			CMsgGCToGCDirtyMultipleSDOCache::default_instance_,
			CMsgGCToGCDirtyMultipleSDOCache_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtyMultipleSDOCache, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCDirtyMultipleSDOCache, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCDirtyMultipleSDOCache));
	CMsgGCCollectItem_descriptor_ = file->message_type(66);
	static const int CMsgGCCollectItem_offsets_[2] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCCollectItem, collection_item_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCCollectItem, subject_item_id_),
	};
	CMsgGCCollectItem_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCCollectItem_descriptor_,
			CMsgGCCollectItem::default_instance_,
			CMsgGCCollectItem_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCCollectItem, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCCollectItem, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCCollectItem));
	CMsgSDONoMemcached_descriptor_ = file->message_type(67);
	static const int CMsgSDONoMemcached_offsets_[1] = {
	};
	CMsgSDONoMemcached_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgSDONoMemcached_descriptor_,
			CMsgSDONoMemcached::default_instance_,
			CMsgSDONoMemcached_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSDONoMemcached, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgSDONoMemcached, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgSDONoMemcached));
	CMsgGCToGCUpdateSQLKeyValue_descriptor_ = file->message_type(68);
	static const int CMsgGCToGCUpdateSQLKeyValue_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCUpdateSQLKeyValue, key_name_),
	};
	CMsgGCToGCUpdateSQLKeyValue_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCUpdateSQLKeyValue_descriptor_,
			CMsgGCToGCUpdateSQLKeyValue::default_instance_,
			CMsgGCToGCUpdateSQLKeyValue_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCUpdateSQLKeyValue, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCUpdateSQLKeyValue, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCUpdateSQLKeyValue));
	CMsgGCToGCIsTrustedServer_descriptor_ = file->message_type(69);
	static const int CMsgGCToGCIsTrustedServer_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServer, steam_id_),
	};
	CMsgGCToGCIsTrustedServer_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCIsTrustedServer_descriptor_,
			CMsgGCToGCIsTrustedServer::default_instance_,
			CMsgGCToGCIsTrustedServer_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServer, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServer, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCIsTrustedServer));
	CMsgGCToGCIsTrustedServerResponse_descriptor_ = file->message_type(70);
	static const int CMsgGCToGCIsTrustedServerResponse_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServerResponse, is_trusted_),
	};
	CMsgGCToGCIsTrustedServerResponse_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCIsTrustedServerResponse_descriptor_,
			CMsgGCToGCIsTrustedServerResponse::default_instance_,
			CMsgGCToGCIsTrustedServerResponse_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServerResponse, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCIsTrustedServerResponse, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCIsTrustedServerResponse));
	CMsgGCToGCBroadcastConsoleCommand_descriptor_ = file->message_type(71);
	static const int CMsgGCToGCBroadcastConsoleCommand_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBroadcastConsoleCommand, con_command_),
	};
	CMsgGCToGCBroadcastConsoleCommand_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCBroadcastConsoleCommand_descriptor_,
			CMsgGCToGCBroadcastConsoleCommand::default_instance_,
			CMsgGCToGCBroadcastConsoleCommand_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBroadcastConsoleCommand, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCBroadcastConsoleCommand, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCBroadcastConsoleCommand));
	CMsgGCServerVersionUpdated_descriptor_ = file->message_type(72);
	static const int CMsgGCServerVersionUpdated_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCServerVersionUpdated, server_version_),
	};
	CMsgGCServerVersionUpdated_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCServerVersionUpdated_descriptor_,
			CMsgGCServerVersionUpdated::default_instance_,
			CMsgGCServerVersionUpdated_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCServerVersionUpdated, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCServerVersionUpdated, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCServerVersionUpdated));
	CMsgGCClientVersionUpdated_descriptor_ = file->message_type(73);
	static const int CMsgGCClientVersionUpdated_offsets_[1] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientVersionUpdated, client_version_),
	};
	CMsgGCClientVersionUpdated_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCClientVersionUpdated_descriptor_,
			CMsgGCClientVersionUpdated::default_instance_,
			CMsgGCClientVersionUpdated_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientVersionUpdated, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCClientVersionUpdated, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCClientVersionUpdated));
	CMsgGCToGCWebAPIAccountChanged_descriptor_ = file->message_type(74);
	static const int CMsgGCToGCWebAPIAccountChanged_offsets_[1] = {
	};
	CMsgGCToGCWebAPIAccountChanged_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCWebAPIAccountChanged_descriptor_,
			CMsgGCToGCWebAPIAccountChanged::default_instance_,
			CMsgGCToGCWebAPIAccountChanged_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCWebAPIAccountChanged, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCWebAPIAccountChanged, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCWebAPIAccountChanged));
	CMsgGCToGCRequestPassportItemGrant_descriptor_ = file->message_type(75);
	static const int CMsgGCToGCRequestPassportItemGrant_offsets_[3] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCRequestPassportItemGrant, steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCRequestPassportItemGrant, league_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCRequestPassportItemGrant, reward_flag_),
	};
	CMsgGCToGCRequestPassportItemGrant_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGCToGCRequestPassportItemGrant_descriptor_,
			CMsgGCToGCRequestPassportItemGrant::default_instance_,
			CMsgGCToGCRequestPassportItemGrant_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCRequestPassportItemGrant, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGCToGCRequestPassportItemGrant, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGCToGCRequestPassportItemGrant));
	CMsgGameServerInfo_descriptor_ = file->message_type(76);
	static const int CMsgGameServerInfo_offsets_[18] = {
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_public_ip_addr_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_private_ip_addr_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_port_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_tv_port_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_key_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_hibernation_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_type_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_region_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_loadavg_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_tv_broadcast_time_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_game_time_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, server_relay_connected_steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, relay_slots_max_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, relays_connected_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, relay_clients_connected_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, relayed_game_server_steam_id_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, parent_relay_count_),
	  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, tv_secret_code_),
	};
	CMsgGameServerInfo_reflection_ =
		new ::google::protobuf::internal::GeneratedMessageReflection(
			CMsgGameServerInfo_descriptor_,
			CMsgGameServerInfo::default_instance_,
			CMsgGameServerInfo_offsets_,
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, _has_bits_[0]),
			GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMsgGameServerInfo, _unknown_fields_),
			-1,
			::google::protobuf::DescriptorPool::generated_pool(),
			::google::protobuf::MessageFactory::generated_factory(),
			sizeof(CMsgGameServerInfo));
	CMsgGameServerInfo_ServerType_descriptor_ = CMsgGameServerInfo_descriptor_->enum_type(0);
	EGCBaseMsg_descriptor_ = file->enum_type(0);
	EGCBaseProtoObjectTypes_descriptor_ = file->enum_type(1);
	GC_BannedWordType_descriptor_ = file->enum_type(2);
}

namespace {

	GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
	inline void protobuf_AssignDescriptorsOnce() {
		::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
			&protobuf_AssignDesc_base_5fgcmessages_2eproto);
	}

	void protobuf_RegisterTypes(const ::std::string&) {
		protobuf_AssignDescriptorsOnce();
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CGCStorePurchaseInit_LineItem_descriptor_, &CGCStorePurchaseInit_LineItem::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseInit_descriptor_, &CMsgGCStorePurchaseInit::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseInitResponse_descriptor_, &CMsgGCStorePurchaseInitResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOPartyInvite_descriptor_, &CSOPartyInvite::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOLobbyInvite_descriptor_, &CSOLobbyInvite::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgSystemBroadcast_descriptor_, &CMsgSystemBroadcast::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgInviteToParty_descriptor_, &CMsgInviteToParty::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgInvitationCreated_descriptor_, &CMsgInvitationCreated::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgPartyInviteResponse_descriptor_, &CMsgPartyInviteResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgKickFromParty_descriptor_, &CMsgKickFromParty::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgLeaveParty_descriptor_, &CMsgLeaveParty::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgServerAvailable_descriptor_, &CMsgServerAvailable::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgLANServerAvailable_descriptor_, &CMsgLANServerAvailable::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconGameAccountClient_descriptor_, &CSOEconGameAccountClient::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOItemCriteriaCondition_descriptor_, &CSOItemCriteriaCondition::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOItemCriteria_descriptor_, &CSOItemCriteria::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOItemRecipe_descriptor_, &CSOItemRecipe::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgDevNewItemRequest_descriptor_, &CMsgDevNewItemRequest::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgIncrementKillCountAttribute_descriptor_, &CMsgIncrementKillCountAttribute::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgApplySticker_descriptor_, &CMsgApplySticker::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgApplyStatTrakSwap_descriptor_, &CMsgApplyStatTrakSwap::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgApplyStrangePart_descriptor_, &CMsgApplyStrangePart::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgApplyPennantUpgrade_descriptor_, &CMsgApplyPennantUpgrade::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgApplyEggEssence_descriptor_, &CMsgApplyEggEssence::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItemAttribute_descriptor_, &CSOEconItemAttribute::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItemEquipped_descriptor_, &CSOEconItemEquipped::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItem_descriptor_, &CSOEconItem::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgAdjustItemEquippedState_descriptor_, &CMsgAdjustItemEquippedState::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgSortItems_descriptor_, &CMsgSortItems::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconClaimCode_descriptor_, &CSOEconClaimCode::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgStoreGetUserData_descriptor_, &CMsgStoreGetUserData::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgStoreGetUserDataResponse_descriptor_, &CMsgStoreGetUserDataResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgUpdateItemSchema_descriptor_, &CMsgUpdateItemSchema::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCError_descriptor_, &CMsgGCError::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgRequestInventoryRefresh_descriptor_, &CMsgRequestInventoryRefresh::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgConVarValue_descriptor_, &CMsgConVarValue::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgReplicateConVars_descriptor_, &CMsgReplicateConVars::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgUseItem_descriptor_, &CMsgUseItem::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgReplayUploadedToYouTube_descriptor_, &CMsgReplayUploadedToYouTube::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgConsumableExhausted_descriptor_, &CMsgConsumableExhausted::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgItemAcknowledged__DEPRECATED_descriptor_, &CMsgItemAcknowledged__DEPRECATED::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgSetItemPositions_descriptor_, &CMsgSetItemPositions::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgSetItemPositions_ItemPosition_descriptor_, &CMsgSetItemPositions_ItemPosition::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCReportAbuse_descriptor_, &CMsgGCReportAbuse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCReportAbuseResponse_descriptor_, &CMsgGCReportAbuseResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCNameItemNotification_descriptor_, &CMsgGCNameItemNotification::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCClientDisplayNotification_descriptor_, &CMsgGCClientDisplayNotification::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCShowItemsPickedUp_descriptor_, &CMsgGCShowItemsPickedUp::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCIncrementKillCountResponse_descriptor_, &CMsgGCIncrementKillCountResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItemDropRateBonus_descriptor_, &CSOEconItemDropRateBonus::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItemLeagueViewPass_descriptor_, &CSOEconItemLeagueViewPass::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconItemEventTicket_descriptor_, &CSOEconItemEventTicket::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCItemPreviewItemBoughtNotification_descriptor_, &CMsgGCItemPreviewItemBoughtNotification::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseCancel_descriptor_, &CMsgGCStorePurchaseCancel::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseCancelResponse_descriptor_, &CMsgGCStorePurchaseCancelResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseFinalize_descriptor_, &CMsgGCStorePurchaseFinalize::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCStorePurchaseFinalizeResponse_descriptor_, &CMsgGCStorePurchaseFinalizeResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCBannedWordListRequest_descriptor_, &CMsgGCBannedWordListRequest::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCRequestAnnouncements_descriptor_, &CMsgGCRequestAnnouncements::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCRequestAnnouncementsResponse_descriptor_, &CMsgGCRequestAnnouncementsResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCBannedWord_descriptor_, &CMsgGCBannedWord::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCBannedWordListResponse_descriptor_, &CMsgGCBannedWordListResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCBannedWordListBroadcast_descriptor_, &CMsgGCToGCBannedWordListBroadcast::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCBannedWordListUpdated_descriptor_, &CMsgGCToGCBannedWordListUpdated::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_, &CSOEconDefaultEquippedDefinitionInstanceClient::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCDirtySDOCache_descriptor_, &CMsgGCToGCDirtySDOCache::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCDirtyMultipleSDOCache_descriptor_, &CMsgGCToGCDirtyMultipleSDOCache::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCCollectItem_descriptor_, &CMsgGCCollectItem::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgSDONoMemcached_descriptor_, &CMsgSDONoMemcached::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCUpdateSQLKeyValue_descriptor_, &CMsgGCToGCUpdateSQLKeyValue::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCIsTrustedServer_descriptor_, &CMsgGCToGCIsTrustedServer::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCIsTrustedServerResponse_descriptor_, &CMsgGCToGCIsTrustedServerResponse::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCBroadcastConsoleCommand_descriptor_, &CMsgGCToGCBroadcastConsoleCommand::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCServerVersionUpdated_descriptor_, &CMsgGCServerVersionUpdated::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCClientVersionUpdated_descriptor_, &CMsgGCClientVersionUpdated::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCWebAPIAccountChanged_descriptor_, &CMsgGCToGCWebAPIAccountChanged::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGCToGCRequestPassportItemGrant_descriptor_, &CMsgGCToGCRequestPassportItemGrant::default_instance());
		::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
			CMsgGameServerInfo_descriptor_, &CMsgGameServerInfo::default_instance());
	}

}  // namespace

void protobuf_ShutdownFile_base_5fgcmessages_2eproto() {
	delete CGCStorePurchaseInit_LineItem::default_instance_;
	delete CGCStorePurchaseInit_LineItem_reflection_;
	delete CMsgGCStorePurchaseInit::default_instance_;
	delete CMsgGCStorePurchaseInit_reflection_;
	delete CMsgGCStorePurchaseInitResponse::default_instance_;
	delete CMsgGCStorePurchaseInitResponse_reflection_;
	delete CSOPartyInvite::default_instance_;
	delete CSOPartyInvite_reflection_;
	delete CSOLobbyInvite::default_instance_;
	delete CSOLobbyInvite_reflection_;
	delete CMsgSystemBroadcast::default_instance_;
	delete CMsgSystemBroadcast_reflection_;
	delete CMsgInviteToParty::default_instance_;
	delete CMsgInviteToParty_reflection_;
	delete CMsgInvitationCreated::default_instance_;
	delete CMsgInvitationCreated_reflection_;
	delete CMsgPartyInviteResponse::default_instance_;
	delete CMsgPartyInviteResponse_reflection_;
	delete CMsgKickFromParty::default_instance_;
	delete CMsgKickFromParty_reflection_;
	delete CMsgLeaveParty::default_instance_;
	delete CMsgLeaveParty_reflection_;
	delete CMsgServerAvailable::default_instance_;
	delete CMsgServerAvailable_reflection_;
	delete CMsgLANServerAvailable::default_instance_;
	delete CMsgLANServerAvailable_reflection_;
	delete CSOEconGameAccountClient::default_instance_;
	delete CSOEconGameAccountClient_reflection_;
	delete CSOItemCriteriaCondition::default_instance_;
	delete CSOItemCriteriaCondition_reflection_;
	delete CSOItemCriteria::default_instance_;
	delete CSOItemCriteria_reflection_;
	delete CSOItemRecipe::default_instance_;
	delete CSOItemRecipe_reflection_;
	delete CMsgDevNewItemRequest::default_instance_;
	delete CMsgDevNewItemRequest_reflection_;
	delete CMsgIncrementKillCountAttribute::default_instance_;
	delete CMsgIncrementKillCountAttribute_reflection_;
	delete CMsgApplySticker::default_instance_;
	delete CMsgApplySticker_reflection_;
	delete CMsgApplyStatTrakSwap::default_instance_;
	delete CMsgApplyStatTrakSwap_reflection_;
	delete CMsgApplyStrangePart::default_instance_;
	delete CMsgApplyStrangePart_reflection_;
	delete CMsgApplyPennantUpgrade::default_instance_;
	delete CMsgApplyPennantUpgrade_reflection_;
	delete CMsgApplyEggEssence::default_instance_;
	delete CMsgApplyEggEssence_reflection_;
	delete CSOEconItemAttribute::default_instance_;
	delete CSOEconItemAttribute_reflection_;
	delete CSOEconItemEquipped::default_instance_;
	delete CSOEconItemEquipped_reflection_;
	delete CSOEconItem::default_instance_;
	delete CSOEconItem_reflection_;
	delete CMsgAdjustItemEquippedState::default_instance_;
	delete CMsgAdjustItemEquippedState_reflection_;
	delete CMsgSortItems::default_instance_;
	delete CMsgSortItems_reflection_;
	delete CSOEconClaimCode::default_instance_;
	delete CSOEconClaimCode_reflection_;
	delete CMsgStoreGetUserData::default_instance_;
	delete CMsgStoreGetUserData_reflection_;
	delete CMsgStoreGetUserDataResponse::default_instance_;
	delete CMsgStoreGetUserDataResponse_reflection_;
	delete CMsgUpdateItemSchema::default_instance_;
	delete CMsgUpdateItemSchema_reflection_;
	delete CMsgGCError::default_instance_;
	delete CMsgGCError_reflection_;
	delete CMsgRequestInventoryRefresh::default_instance_;
	delete CMsgRequestInventoryRefresh_reflection_;
	delete CMsgConVarValue::default_instance_;
	delete CMsgConVarValue_reflection_;
	delete CMsgReplicateConVars::default_instance_;
	delete CMsgReplicateConVars_reflection_;
	delete CMsgUseItem::default_instance_;
	delete CMsgUseItem_reflection_;
	delete CMsgReplayUploadedToYouTube::default_instance_;
	delete CMsgReplayUploadedToYouTube_reflection_;
	delete CMsgConsumableExhausted::default_instance_;
	delete CMsgConsumableExhausted_reflection_;
	delete CMsgItemAcknowledged__DEPRECATED::default_instance_;
	delete CMsgItemAcknowledged__DEPRECATED_reflection_;
	delete CMsgSetItemPositions::default_instance_;
	delete CMsgSetItemPositions_reflection_;
	delete CMsgSetItemPositions_ItemPosition::default_instance_;
	delete CMsgSetItemPositions_ItemPosition_reflection_;
	delete CMsgGCReportAbuse::default_instance_;
	delete CMsgGCReportAbuse_reflection_;
	delete CMsgGCReportAbuseResponse::default_instance_;
	delete CMsgGCReportAbuseResponse_reflection_;
	delete CMsgGCNameItemNotification::default_instance_;
	delete CMsgGCNameItemNotification_reflection_;
	delete CMsgGCClientDisplayNotification::default_instance_;
	delete CMsgGCClientDisplayNotification_reflection_;
	delete CMsgGCShowItemsPickedUp::default_instance_;
	delete CMsgGCShowItemsPickedUp_reflection_;
	delete CMsgGCIncrementKillCountResponse::default_instance_;
	delete CMsgGCIncrementKillCountResponse_reflection_;
	delete CSOEconItemDropRateBonus::default_instance_;
	delete CSOEconItemDropRateBonus_reflection_;
	delete CSOEconItemLeagueViewPass::default_instance_;
	delete CSOEconItemLeagueViewPass_reflection_;
	delete CSOEconItemEventTicket::default_instance_;
	delete CSOEconItemEventTicket_reflection_;
	delete CMsgGCItemPreviewItemBoughtNotification::default_instance_;
	delete CMsgGCItemPreviewItemBoughtNotification_reflection_;
	delete CMsgGCStorePurchaseCancel::default_instance_;
	delete CMsgGCStorePurchaseCancel_reflection_;
	delete CMsgGCStorePurchaseCancelResponse::default_instance_;
	delete CMsgGCStorePurchaseCancelResponse_reflection_;
	delete CMsgGCStorePurchaseFinalize::default_instance_;
	delete CMsgGCStorePurchaseFinalize_reflection_;
	delete CMsgGCStorePurchaseFinalizeResponse::default_instance_;
	delete CMsgGCStorePurchaseFinalizeResponse_reflection_;
	delete CMsgGCBannedWordListRequest::default_instance_;
	delete CMsgGCBannedWordListRequest_reflection_;
	delete CMsgGCRequestAnnouncements::default_instance_;
	delete CMsgGCRequestAnnouncements_reflection_;
	delete CMsgGCRequestAnnouncementsResponse::default_instance_;
	delete CMsgGCRequestAnnouncementsResponse_reflection_;
	delete CMsgGCBannedWord::default_instance_;
	delete CMsgGCBannedWord_reflection_;
	delete CMsgGCBannedWordListResponse::default_instance_;
	delete CMsgGCBannedWordListResponse_reflection_;
	delete CMsgGCToGCBannedWordListBroadcast::default_instance_;
	delete CMsgGCToGCBannedWordListBroadcast_reflection_;
	delete CMsgGCToGCBannedWordListUpdated::default_instance_;
	delete CMsgGCToGCBannedWordListUpdated_reflection_;
	delete CSOEconDefaultEquippedDefinitionInstanceClient::default_instance_;
	delete CSOEconDefaultEquippedDefinitionInstanceClient_reflection_;
	delete CMsgGCToGCDirtySDOCache::default_instance_;
	delete CMsgGCToGCDirtySDOCache_reflection_;
	delete CMsgGCToGCDirtyMultipleSDOCache::default_instance_;
	delete CMsgGCToGCDirtyMultipleSDOCache_reflection_;
	delete CMsgGCCollectItem::default_instance_;
	delete CMsgGCCollectItem_reflection_;
	delete CMsgSDONoMemcached::default_instance_;
	delete CMsgSDONoMemcached_reflection_;
	delete CMsgGCToGCUpdateSQLKeyValue::default_instance_;
	delete CMsgGCToGCUpdateSQLKeyValue_reflection_;
	delete CMsgGCToGCIsTrustedServer::default_instance_;
	delete CMsgGCToGCIsTrustedServer_reflection_;
	delete CMsgGCToGCIsTrustedServerResponse::default_instance_;
	delete CMsgGCToGCIsTrustedServerResponse_reflection_;
	delete CMsgGCToGCBroadcastConsoleCommand::default_instance_;
	delete CMsgGCToGCBroadcastConsoleCommand_reflection_;
	delete CMsgGCServerVersionUpdated::default_instance_;
	delete CMsgGCServerVersionUpdated_reflection_;
	delete CMsgGCClientVersionUpdated::default_instance_;
	delete CMsgGCClientVersionUpdated_reflection_;
	delete CMsgGCToGCWebAPIAccountChanged::default_instance_;
	delete CMsgGCToGCWebAPIAccountChanged_reflection_;
	delete CMsgGCToGCRequestPassportItemGrant::default_instance_;
	delete CMsgGCToGCRequestPassportItemGrant_reflection_;
	delete CMsgGameServerInfo::default_instance_;
	delete CMsgGameServerInfo_reflection_;
}

void protobuf_AddDesc_base_5fgcmessages_2eproto() {
	static bool already_here = false;
	if (already_here) return;
	already_here = true;
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	::protobuf_AddDesc_steammessages_2eproto();
	::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
		"\n\025base_gcmessages.proto\032\023steammessages.p"
		"roto\"}\n\035CGCStorePurchaseInit_LineItem\022\023\n"
		"\013item_def_id\030\001 \001(\r\022\020\n\010quantity\030\002 \001(\r\022\036\n\026"
		"cost_in_local_currency\030\003 \001(\r\022\025\n\rpurchase"
		"_type\030\004 \001(\r\"\202\001\n\027CMsgGCStorePurchaseInit\022"
		"\017\n\007country\030\001 \001(\t\022\020\n\010language\030\002 \001(\005\022\020\n\010cu"
		"rrency\030\003 \001(\005\0222\n\nline_items\030\004 \003(\0132\036.CGCSt"
		"orePurchaseInit_LineItem\"`\n\037CMsgGCStoreP"
		"urchaseInitResponse\022\016\n\006result\030\001 \001(\005\022\016\n\006t"
		"xn_id\030\002 \001(\004\022\013\n\003url\030\003 \001(\t\022\020\n\010item_ids\030\004 \003"
		"(\004\"P\n\016CSOPartyInvite\022\026\n\010group_id\030\001 \001(\004B\004"
		"\200\246\035\001\022\021\n\tsender_id\030\002 \001(\006\022\023\n\013sender_name\030\003"
		" \001(\t\"P\n\016CSOLobbyInvite\022\026\n\010group_id\030\001 \001(\004"
		"B\004\200\246\035\001\022\021\n\tsender_id\030\002 \001(\006\022\023\n\013sender_name"
		"\030\003 \001(\t\"&\n\023CMsgSystemBroadcast\022\017\n\007message"
		"\030\001 \001(\t\"R\n\021CMsgInviteToParty\022\020\n\010steam_id\030"
		"\001 \001(\006\022\026\n\016client_version\030\002 \001(\r\022\023\n\013team_in"
		"vite\030\003 \001(\r\";\n\025CMsgInvitationCreated\022\020\n\010g"
		"roup_id\030\001 \001(\004\022\020\n\010steam_id\030\002 \001(\006\"h\n\027CMsgP"
		"artyInviteResponse\022\020\n\010party_id\030\001 \001(\004\022\016\n\006"
		"accept\030\002 \001(\010\022\026\n\016client_version\030\003 \001(\r\022\023\n\013"
		"team_invite\030\004 \001(\r\"%\n\021CMsgKickFromParty\022\020"
		"\n\010steam_id\030\001 \001(\006\"\020\n\016CMsgLeaveParty\"\025\n\023CM"
		"sgServerAvailable\"*\n\026CMsgLANServerAvaila"
		"ble\022\020\n\010lobby_id\030\001 \001(\006\"\264\001\n\030CSOEconGameAcc"
		"ountClient\022$\n\031additional_backpack_slots\030"
		"\001 \001(\r:\0010\022\"\n\032bonus_xp_timestamp_refresh\030\014"
		" \001(\007\022\032\n\022bonus_xp_usedflags\030\r \001(\r\022\026\n\016elev"
		"ated_state\030\016 \001(\r\022\032\n\022elevated_timestamp\030\017"
		" \001(\r\"r\n\030CSOItemCriteriaCondition\022\n\n\002op\030\001"
		" \001(\005\022\r\n\005field\030\002 \001(\t\022\020\n\010required\030\003 \001(\010\022\023\n"
		"\013float_value\030\004 \001(\002\022\024\n\014string_value\030\005 \001(\t"
		"\"\261\002\n\017CSOItemCriteria\022\022\n\nitem_level\030\001 \001(\r"
		"\022\024\n\014item_quality\030\002 \001(\005\022\026\n\016item_level_set"
		"\030\003 \001(\010\022\030\n\020item_quality_set\030\004 \001(\010\022\031\n\021init"
		"ial_inventory\030\005 \001(\r\022\030\n\020initial_quantity\030"
		"\006 \001(\r\022\033\n\023ignore_enabled_flag\030\010 \001(\010\022-\n\nco"
		"nditions\030\t \003(\0132\031.CSOItemCriteriaConditio"
		"n\022\023\n\013item_rarity\030\n \001(\005\022\027\n\017item_rarity_se"
		"t\030\013 \001(\010\022\023\n\013recent_only\030\014 \001(\010\"\325\003\n\rCSOItem"
		"Recipe\022\021\n\tdef_index\030\001 \001(\r\022\014\n\004name\030\002 \001(\t\022"
		"\013\n\003n_a\030\003 \001(\t\022\023\n\013desc_inputs\030\004 \001(\t\022\024\n\014des"
		"c_outputs\030\005 \001(\t\022\014\n\004di_a\030\006 \001(\t\022\014\n\004di_b\030\007 "
		"\001(\t\022\014\n\004di_c\030\010 \001(\t\022\014\n\004do_a\030\t \001(\t\022\014\n\004do_b\030"
		"\n \001(\t\022\014\n\004do_c\030\013 \001(\t\022\037\n\027requires_all_same"
		"_class\030\014 \001(\010\022\036\n\026requires_all_same_slot\030\r"
		" \001(\010\022\036\n\026class_usage_for_output\030\016 \001(\005\022\035\n\025"
		"slot_usage_for_output\030\017 \001(\005\022\026\n\016set_for_o"
		"utput\030\020 \001(\005\022.\n\024input_items_criteria\030\024 \003("
		"\0132\020.CSOItemCriteria\022/\n\025output_items_crit"
		"eria\030\025 \003(\0132\020.CSOItemCriteria\022\036\n\026input_it"
		"em_dupe_counts\030\026 \003(\r\"M\n\025CMsgDevNewItemRe"
		"quest\022\020\n\010receiver\030\001 \001(\006\022\"\n\010criteria\030\002 \001("
		"\0132\020.CSOItemCriteria\"\214\001\n\037CMsgIncrementKil"
		"lCountAttribute\022\031\n\021killer_account_id\030\001 \001"
		"(\007\022\031\n\021victim_account_id\030\002 \001(\007\022\017\n\007item_id"
		"\030\003 \001(\004\022\022\n\nevent_type\030\004 \001(\r\022\016\n\006amount\030\005 \001"
		"(\r\"\206\001\n\020CMsgApplySticker\022\027\n\017sticker_item_"
		"id\030\001 \001(\004\022\024\n\014item_item_id\030\002 \001(\004\022\024\n\014sticke"
		"r_slot\030\003 \001(\r\022\027\n\017baseitem_defidx\030\004 \001(\r\022\024\n"
		"\014sticker_wear\030\005 \001(\002\"]\n\025CMsgApplyStatTrak"
		"Swap\022\024\n\014tool_item_id\030\001 \001(\004\022\026\n\016item_1_ite"
		"m_id\030\002 \001(\004\022\026\n\016item_2_item_id\030\003 \001(\004\"J\n\024CM"
		"sgApplyStrangePart\022\034\n\024strange_part_item_"
		"id\030\001 \001(\004\022\024\n\014item_item_id\030\002 \001(\004\"K\n\027CMsgAp"
		"plyPennantUpgrade\022\027\n\017upgrade_item_id\030\001 \001"
		"(\004\022\027\n\017pennant_item_id\030\002 \001(\004\"C\n\023CMsgApply"
		"EggEssence\022\027\n\017essence_item_id\030\001 \001(\004\022\023\n\013e"
		"gg_item_id\030\002 \001(\004\"M\n\024CSOEconItemAttribute"
		"\022\021\n\tdef_index\030\001 \001(\r\022\r\n\005value\030\002 \001(\r\022\023\n\013va"
		"lue_bytes\030\003 \001(\014\":\n\023CSOEconItemEquipped\022\021"
		"\n\tnew_class\030\001 \001(\r\022\020\n\010new_slot\030\002 \001(\r\"\237\003\n\013"
		"CSOEconItem\022\n\n\002id\030\001 \001(\004\022\022\n\naccount_id\030\002 "
		"\001(\r\022\021\n\tinventory\030\003 \001(\r\022\021\n\tdef_index\030\004 \001("
		"\r\022\020\n\010quantity\030\005 \001(\r\022\r\n\005level\030\006 \001(\r\022\017\n\007qu"
		"ality\030\007 \001(\r\022\020\n\005flags\030\010 \001(\r:\0010\022\016\n\006origin\030"
		"\t \001(\r\022\023\n\013custom_name\030\n \001(\t\022\023\n\013custom_des"
		"c\030\013 \001(\t\022(\n\tattribute\030\014 \003(\0132\025.CSOEconItem"
		"Attribute\022#\n\rinterior_item\030\r \001(\0132\014.CSOEc"
		"onItem\022\025\n\006in_use\030\016 \001(\010:\005false\022\020\n\005style\030\017"
		" \001(\r:\0010\022\026\n\013original_id\030\020 \001(\004:\0010\022,\n\016equip"
		"ped_state\030\022 \003(\0132\024.CSOEconItemEquipped\022\016\n"
		"\006rarity\030\023 \001(\r\"a\n\033CMsgAdjustItemEquippedS"
		"tate\022\017\n\007item_id\030\001 \001(\004\022\021\n\tnew_class\030\002 \001(\r"
		"\022\020\n\010new_slot\030\003 \001(\r\022\014\n\004swap\030\004 \001(\010\"\"\n\rCMsg"
		"SortItems\022\021\n\tsort_type\030\001 \001(\r\"^\n\020CSOEconC"
		"laimCode\022\022\n\naccount_id\030\001 \001(\r\022\021\n\tcode_typ"
		"e\030\002 \001(\r\022\025\n\rtime_acquired\030\003 \001(\r\022\014\n\004code\030\004"
		" \001(\t\"E\n\024CMsgStoreGetUserData\022\033\n\023price_sh"
		"eet_version\030\001 \001(\007\022\020\n\010currency\030\002 \001(\005\"\231\001\n\034"
		"CMsgStoreGetUserDataResponse\022\016\n\006result\030\001"
		" \001(\005\022\033\n\023currency_deprecated\030\002 \001(\005\022\032\n\022cou"
		"ntry_deprecated\030\003 \001(\t\022\033\n\023price_sheet_ver"
		"sion\030\004 \001(\007\022\023\n\013price_sheet\030\010 \001(\014\"\206\001\n\024CMsg"
		"UpdateItemSchema\022\022\n\nitems_game\030\001 \001(\014\022\033\n\023"
		"item_schema_version\030\002 \001(\007\022%\n\035items_game_"
		"url_DEPRECATED2013\030\003 \001(\t\022\026\n\016items_game_u"
		"rl\030\004 \001(\t\"!\n\013CMsgGCError\022\022\n\nerror_text\030\001 "
		"\001(\t\"\035\n\033CMsgRequestInventoryRefresh\".\n\017CM"
		"sgConVarValue\022\014\n\004name\030\001 \001(\t\022\r\n\005value\030\002 \001"
		"(\t\"9\n\024CMsgReplicateConVars\022!\n\007convars\030\001 "
		"\003(\0132\020.CMsgConVarValue\"\216\001\n\013CMsgUseItem\022\017\n"
		"\007item_id\030\001 \001(\004\022\027\n\017target_steam_id\030\002 \001(\006\022"
		"\037\n\027gift__potential_targets\030\003 \003(\r\022\030\n\020duel"
		"__class_lock\030\004 \001(\r\022\032\n\022initiator_steam_id"
		"\030\005 \001(\006\"d\n\033CMsgReplayUploadedToYouTube\022\023\n"
		"\013youtube_url\030\001 \001(\t\022\034\n\024youtube_account_na"
		"me\030\002 \001(\t\022\022\n\nsession_id\030\003 \001(\004\".\n\027CMsgCons"
		"umableExhausted\022\023\n\013item_def_id\030\001 \001(\005\"\236\001\n"
		" CMsgItemAcknowledged__DEPRECATED\022\022\n\nacc"
		"ount_id\030\001 \001(\r\022\021\n\tinventory\030\002 \001(\r\022\021\n\tdef_"
		"index\030\003 \001(\r\022\017\n\007quality\030\004 \001(\r\022\016\n\006rarity\030\005"
		" \001(\r\022\016\n\006origin\030\006 \001(\r\022\017\n\007item_id\030\007 \001(\004\"\235\001"
		"\n\024CMsgSetItemPositions\022:\n\016item_positions"
		"\030\001 \003(\0132\".CMsgSetItemPositions.ItemPositi"
		"on\032I\n\014ItemPosition\022\026\n\016legacy_item_id\030\001 \001"
		"(\r\022\020\n\010position\030\002 \001(\r\022\017\n\007item_id\030\003 \001(\004\"\270\001"
		"\n\021CMsgGCReportAbuse\022\027\n\017target_steam_id\030\001"
		" \001(\006\022\023\n\013description\030\004 \001(\t\022\013\n\003gid\030\005 \001(\004\022\022"
		"\n\nabuse_type\030\002 \001(\r\022\024\n\014content_type\030\003 \001(\r"
		"\022\035\n\025target_game_server_ip\030\006 \001(\007\022\037\n\027targe"
		"t_game_server_port\030\007 \001(\r\"[\n\031CMsgGCReport"
		"AbuseResponse\022\027\n\017target_steam_id\030\001 \001(\006\022\016"
		"\n\006result\030\002 \001(\r\022\025\n\rerror_message\030\003 \001(\t\"f\n"
		"\032CMsgGCNameItemNotification\022\026\n\016player_st"
		"eamid\030\001 \001(\006\022\026\n\016item_def_index\030\002 \001(\r\022\030\n\020i"
		"tem_name_custom\030\003 \001(\t\"\266\001\n\037CMsgGCClientDi"
		"splayNotification\022+\n#notification_title_"
		"localization_key\030\001 \001(\t\022*\n\"notification_b"
		"ody_localization_key\030\002 \001(\t\022\033\n\023body_subst"
		"ring_keys\030\003 \003(\t\022\035\n\025body_substring_values"
		"\030\004 \003(\t\"1\n\027CMsgGCShowItemsPickedUp\022\026\n\016pla"
		"yer_steamid\030\001 \001(\006\"|\n CMsgGCIncrementKill"
		"CountResponse\022\037\n\021killer_account_id\030\001 \001(\r"
		"B\004\200\246\035\001\022\021\n\tnum_kills\030\002 \001(\r\022\020\n\010item_def\030\003 "
		"\001(\r\022\022\n\nlevel_type\030\004 \001(\r\"\217\001\n\030CSOEconItemD"
		"ropRateBonus\022\022\n\naccount_id\030\001 \001(\r\022\027\n\017expi"
		"ration_date\030\002 \001(\007\022\r\n\005bonus\030\003 \001(\002\022\023\n\013bonu"
		"s_count\030\004 \001(\r\022\017\n\007item_id\030\005 \001(\004\022\021\n\tdef_in"
		"dex\030\006 \001(\r\"p\n\031CSOEconItemLeagueViewPass\022\030"
		"\n\naccount_id\030\001 \001(\rB\004\200\246\035\001\022\027\n\tleague_id\030\002 "
		"\001(\rB\004\200\246\035\001\022\r\n\005admin\030\003 \001(\r\022\021\n\titemindex\030\004 "
		"\001(\r\"O\n\026CSOEconItemEventTicket\022\022\n\naccount"
		"_id\030\001 \001(\r\022\020\n\010event_id\030\002 \001(\r\022\017\n\007item_id\030\003"
		" \001(\004\"A\n\'CMsgGCItemPreviewItemBoughtNotif"
		"ication\022\026\n\016item_def_index\030\001 \001(\r\"+\n\031CMsgG"
		"CStorePurchaseCancel\022\016\n\006txn_id\030\001 \001(\004\"3\n!"
		"CMsgGCStorePurchaseCancelResponse\022\016\n\006res"
		"ult\030\001 \001(\r\"-\n\033CMsgGCStorePurchaseFinalize"
		"\022\016\n\006txn_id\030\001 \001(\004\"G\n#CMsgGCStorePurchaseF"
		"inalizeResponse\022\016\n\006result\030\001 \001(\r\022\020\n\010item_"
		"ids\030\002 \003(\004\"I\n\033CMsgGCBannedWordListRequest"
		"\022\031\n\021ban_list_group_id\030\001 \001(\r\022\017\n\007word_id\030\002"
		" \001(\r\"\034\n\032CMsgGCRequestAnnouncements\"\202\001\n\"C"
		"MsgGCRequestAnnouncementsResponse\022\032\n\022ann"
		"ouncement_title\030\001 \001(\t\022\024\n\014announcement\030\002 "
		"\001(\t\022\027\n\017nextmatch_title\030\003 \001(\t\022\021\n\tnextmatc"
		"h\030\004 \001(\t\"u\n\020CMsgGCBannedWord\022\017\n\007word_id\030\001"
		" \001(\r\022B\n\tword_type\030\002 \001(\0162\022.GC_BannedWordT"
		"ype:\033GC_BANNED_WORD_DISABLE_WORD\022\014\n\004word"
		"\030\003 \001(\t\"_\n\034CMsgGCBannedWordListResponse\022\031"
		"\n\021ban_list_group_id\030\001 \001(\r\022$\n\tword_list\030\002"
		" \003(\0132\021.CMsgGCBannedWord\"U\n!CMsgGCToGCBan"
		"nedWordListBroadcast\0220\n\tbroadcast\030\001 \001(\0132"
		"\035.CMsgGCBannedWordListResponse\"3\n\037CMsgGC"
		"ToGCBannedWordListUpdated\022\020\n\010group_id\030\001 "
		"\001(\r\"\222\001\n.CSOEconDefaultEquippedDefinition"
		"InstanceClient\022\030\n\naccount_id\030\001 \001(\rB\004\200\246\035\001"
		"\022\027\n\017item_definition\030\002 \001(\r\022\026\n\010class_id\030\003 "
		"\001(\rB\004\200\246\035\001\022\025\n\007slot_id\030\004 \001(\rB\004\200\246\035\001\"\?\n\027CMsg"
		"GCToGCDirtySDOCache\022\020\n\010sdo_type\030\001 \001(\r\022\022\n"
		"\nkey_uint64\030\002 \001(\004\"G\n\037CMsgGCToGCDirtyMult"
		"ipleSDOCache\022\020\n\010sdo_type\030\001 \001(\r\022\022\n\nkey_ui"
		"nt64\030\002 \003(\004\"H\n\021CMsgGCCollectItem\022\032\n\022colle"
		"ction_item_id\030\001 \001(\004\022\027\n\017subject_item_id\030\002"
		" \001(\004\"\024\n\022CMsgSDONoMemcached\"/\n\033CMsgGCToGC"
		"UpdateSQLKeyValue\022\020\n\010key_name\030\001 \001(\t\"-\n\031C"
		"MsgGCToGCIsTrustedServer\022\020\n\010steam_id\030\001 \001"
		"(\006\"7\n!CMsgGCToGCIsTrustedServerResponse\022"
		"\022\n\nis_trusted\030\001 \001(\010\"8\n!CMsgGCToGCBroadca"
		"stConsoleCommand\022\023\n\013con_command\030\001 \001(\t\"4\n"
		"\032CMsgGCServerVersionUpdated\022\026\n\016server_ve"
		"rsion\030\001 \001(\r\"4\n\032CMsgGCClientVersionUpdate"
		"d\022\026\n\016client_version\030\001 \001(\r\" \n\036CMsgGCToGCW"
		"ebAPIAccountChanged\"^\n\"CMsgGCToGCRequest"
		"PassportItemGrant\022\020\n\010steam_id\030\001 \001(\006\022\021\n\tl"
		"eague_id\030\002 \001(\r\022\023\n\013reward_flag\030\003 \001(\005\"\350\004\n\022"
		"CMsgGameServerInfo\022\035\n\025server_public_ip_a"
		"ddr\030\001 \001(\007\022\036\n\026server_private_ip_addr\030\002 \001("
		"\007\022\023\n\013server_port\030\003 \001(\r\022\026\n\016server_tv_port"
		"\030\004 \001(\r\022\022\n\nserver_key\030\005 \001(\t\022\032\n\022server_hib"
		"ernation\030\006 \001(\010\022@\n\013server_type\030\007 \001(\0162\036.CM"
		"sgGameServerInfo.ServerType:\013UNSPECIFIED"
		"\022\025\n\rserver_region\030\010 \001(\r\022\026\n\016server_loadav"
		"g\030\t \001(\002\022 \n\030server_tv_broadcast_time\030\n \001("
		"\002\022\030\n\020server_game_time\030\013 \001(\002\022\'\n\037server_re"
		"lay_connected_steam_id\030\014 \001(\006\022\027\n\017relay_sl"
		"ots_max\030\r \001(\r\022\030\n\020relays_connected\030\016 \001(\005\022"
		"\037\n\027relay_clients_connected\030\017 \001(\005\022$\n\034rela"
		"yed_game_server_steam_id\030\020 \001(\006\022\032\n\022parent"
		"_relay_count\030\021 \001(\r\022\026\n\016tv_secret_code\030\022 \001"
		"(\006\"2\n\nServerType\022\017\n\013UNSPECIFIED\020\000\022\010\n\004GAM"
		"E\020\001\022\t\n\005PROXY\020\002*\307\003\n\nEGCBaseMsg\022\032\n\025k_EMsgG"
		"CSystemMessage\020\241\037\022\035\n\030k_EMsgGCReplicateCo"
		"nVars\020\242\037\022\032\n\025k_EMsgGCConVarUpdated\020\243\037\022\024\n\017"
		"k_EMsgGCInQueue\020\250\037\022\032\n\025k_EMsgGCInviteToPa"
		"rty\020\225#\022\036\n\031k_EMsgGCInvitationCreated\020\226#\022 "
		"\n\033k_EMsgGCPartyInviteResponse\020\227#\022\032\n\025k_EM"
		"sgGCKickFromParty\020\230#\022\027\n\022k_EMsgGCLeavePar"
		"ty\020\231#\022\034\n\027k_EMsgGCServerAvailable\020\232#\022\"\n\035k"
		"_EMsgGCClientConnectToServer\020\233#\022\033\n\026k_EMs"
		"gGCGameServerInfo\020\234#\022\022\n\rk_EMsgGCError\020\235#"
		"\022%\n k_EMsgGCReplay_UploadedToYouTube\020\236#\022"
		"\037\n\032k_EMsgGCLANServerAvailable\020\237#*Y\n\027EGCB"
		"aseProtoObjectTypes\022\036\n\031k_EProtoObjectPar"
		"tyInvite\020\351\007\022\036\n\031k_EProtoObjectLobbyInvite"
		"\020\352\007*T\n\021GC_BannedWordType\022\037\n\033GC_BANNED_WO"
		"RD_DISABLE_WORD\020\000\022\036\n\032GC_BANNED_WORD_ENAB"
		"LE_WORD\020\001B\005H\001\200\001\000", 8736);
	::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
		"base_gcmessages.proto", &protobuf_RegisterTypes);
	CGCStorePurchaseInit_LineItem::default_instance_ = new CGCStorePurchaseInit_LineItem();
	CMsgGCStorePurchaseInit::default_instance_ = new CMsgGCStorePurchaseInit();
	CMsgGCStorePurchaseInitResponse::default_instance_ = new CMsgGCStorePurchaseInitResponse();
	CSOPartyInvite::default_instance_ = new CSOPartyInvite();
	CSOLobbyInvite::default_instance_ = new CSOLobbyInvite();
	CMsgSystemBroadcast::default_instance_ = new CMsgSystemBroadcast();
	CMsgInviteToParty::default_instance_ = new CMsgInviteToParty();
	CMsgInvitationCreated::default_instance_ = new CMsgInvitationCreated();
	CMsgPartyInviteResponse::default_instance_ = new CMsgPartyInviteResponse();
	CMsgKickFromParty::default_instance_ = new CMsgKickFromParty();
	CMsgLeaveParty::default_instance_ = new CMsgLeaveParty();
	CMsgServerAvailable::default_instance_ = new CMsgServerAvailable();
	CMsgLANServerAvailable::default_instance_ = new CMsgLANServerAvailable();
	CSOEconGameAccountClient::default_instance_ = new CSOEconGameAccountClient();
	CSOItemCriteriaCondition::default_instance_ = new CSOItemCriteriaCondition();
	CSOItemCriteria::default_instance_ = new CSOItemCriteria();
	CSOItemRecipe::default_instance_ = new CSOItemRecipe();
	CMsgDevNewItemRequest::default_instance_ = new CMsgDevNewItemRequest();
	CMsgIncrementKillCountAttribute::default_instance_ = new CMsgIncrementKillCountAttribute();
	CMsgApplySticker::default_instance_ = new CMsgApplySticker();
	CMsgApplyStatTrakSwap::default_instance_ = new CMsgApplyStatTrakSwap();
	CMsgApplyStrangePart::default_instance_ = new CMsgApplyStrangePart();
	CMsgApplyPennantUpgrade::default_instance_ = new CMsgApplyPennantUpgrade();
	CMsgApplyEggEssence::default_instance_ = new CMsgApplyEggEssence();
	CSOEconItemAttribute::default_instance_ = new CSOEconItemAttribute();
	CSOEconItemEquipped::default_instance_ = new CSOEconItemEquipped();
	CSOEconItem::default_instance_ = new CSOEconItem();
	CMsgAdjustItemEquippedState::default_instance_ = new CMsgAdjustItemEquippedState();
	CMsgSortItems::default_instance_ = new CMsgSortItems();
	CSOEconClaimCode::default_instance_ = new CSOEconClaimCode();
	CMsgStoreGetUserData::default_instance_ = new CMsgStoreGetUserData();
	CMsgStoreGetUserDataResponse::default_instance_ = new CMsgStoreGetUserDataResponse();
	CMsgUpdateItemSchema::default_instance_ = new CMsgUpdateItemSchema();
	CMsgGCError::default_instance_ = new CMsgGCError();
	CMsgRequestInventoryRefresh::default_instance_ = new CMsgRequestInventoryRefresh();
	CMsgConVarValue::default_instance_ = new CMsgConVarValue();
	CMsgReplicateConVars::default_instance_ = new CMsgReplicateConVars();
	CMsgUseItem::default_instance_ = new CMsgUseItem();
	CMsgReplayUploadedToYouTube::default_instance_ = new CMsgReplayUploadedToYouTube();
	CMsgConsumableExhausted::default_instance_ = new CMsgConsumableExhausted();
	CMsgItemAcknowledged__DEPRECATED::default_instance_ = new CMsgItemAcknowledged__DEPRECATED();
	CMsgSetItemPositions::default_instance_ = new CMsgSetItemPositions();
	CMsgSetItemPositions_ItemPosition::default_instance_ = new CMsgSetItemPositions_ItemPosition();
	CMsgGCReportAbuse::default_instance_ = new CMsgGCReportAbuse();
	CMsgGCReportAbuseResponse::default_instance_ = new CMsgGCReportAbuseResponse();
	CMsgGCNameItemNotification::default_instance_ = new CMsgGCNameItemNotification();
	CMsgGCClientDisplayNotification::default_instance_ = new CMsgGCClientDisplayNotification();
	CMsgGCShowItemsPickedUp::default_instance_ = new CMsgGCShowItemsPickedUp();
	CMsgGCIncrementKillCountResponse::default_instance_ = new CMsgGCIncrementKillCountResponse();
	CSOEconItemDropRateBonus::default_instance_ = new CSOEconItemDropRateBonus();
	CSOEconItemLeagueViewPass::default_instance_ = new CSOEconItemLeagueViewPass();
	CSOEconItemEventTicket::default_instance_ = new CSOEconItemEventTicket();
	CMsgGCItemPreviewItemBoughtNotification::default_instance_ = new CMsgGCItemPreviewItemBoughtNotification();
	CMsgGCStorePurchaseCancel::default_instance_ = new CMsgGCStorePurchaseCancel();
	CMsgGCStorePurchaseCancelResponse::default_instance_ = new CMsgGCStorePurchaseCancelResponse();
	CMsgGCStorePurchaseFinalize::default_instance_ = new CMsgGCStorePurchaseFinalize();
	CMsgGCStorePurchaseFinalizeResponse::default_instance_ = new CMsgGCStorePurchaseFinalizeResponse();
	CMsgGCBannedWordListRequest::default_instance_ = new CMsgGCBannedWordListRequest();
	CMsgGCRequestAnnouncements::default_instance_ = new CMsgGCRequestAnnouncements();
	CMsgGCRequestAnnouncementsResponse::default_instance_ = new CMsgGCRequestAnnouncementsResponse();
	CMsgGCBannedWord::default_instance_ = new CMsgGCBannedWord();
	CMsgGCBannedWordListResponse::default_instance_ = new CMsgGCBannedWordListResponse();
	CMsgGCToGCBannedWordListBroadcast::default_instance_ = new CMsgGCToGCBannedWordListBroadcast();
	CMsgGCToGCBannedWordListUpdated::default_instance_ = new CMsgGCToGCBannedWordListUpdated();
	CSOEconDefaultEquippedDefinitionInstanceClient::default_instance_ = new CSOEconDefaultEquippedDefinitionInstanceClient();
	CMsgGCToGCDirtySDOCache::default_instance_ = new CMsgGCToGCDirtySDOCache();
	CMsgGCToGCDirtyMultipleSDOCache::default_instance_ = new CMsgGCToGCDirtyMultipleSDOCache();
	CMsgGCCollectItem::default_instance_ = new CMsgGCCollectItem();
	CMsgSDONoMemcached::default_instance_ = new CMsgSDONoMemcached();
	CMsgGCToGCUpdateSQLKeyValue::default_instance_ = new CMsgGCToGCUpdateSQLKeyValue();
	CMsgGCToGCIsTrustedServer::default_instance_ = new CMsgGCToGCIsTrustedServer();
	CMsgGCToGCIsTrustedServerResponse::default_instance_ = new CMsgGCToGCIsTrustedServerResponse();
	CMsgGCToGCBroadcastConsoleCommand::default_instance_ = new CMsgGCToGCBroadcastConsoleCommand();
	CMsgGCServerVersionUpdated::default_instance_ = new CMsgGCServerVersionUpdated();
	CMsgGCClientVersionUpdated::default_instance_ = new CMsgGCClientVersionUpdated();
	CMsgGCToGCWebAPIAccountChanged::default_instance_ = new CMsgGCToGCWebAPIAccountChanged();
	CMsgGCToGCRequestPassportItemGrant::default_instance_ = new CMsgGCToGCRequestPassportItemGrant();
	CMsgGameServerInfo::default_instance_ = new CMsgGameServerInfo();
	CGCStorePurchaseInit_LineItem::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseInit::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseInitResponse::default_instance_->InitAsDefaultInstance();
	CSOPartyInvite::default_instance_->InitAsDefaultInstance();
	CSOLobbyInvite::default_instance_->InitAsDefaultInstance();
	CMsgSystemBroadcast::default_instance_->InitAsDefaultInstance();
	CMsgInviteToParty::default_instance_->InitAsDefaultInstance();
	CMsgInvitationCreated::default_instance_->InitAsDefaultInstance();
	CMsgPartyInviteResponse::default_instance_->InitAsDefaultInstance();
	CMsgKickFromParty::default_instance_->InitAsDefaultInstance();
	CMsgLeaveParty::default_instance_->InitAsDefaultInstance();
	CMsgServerAvailable::default_instance_->InitAsDefaultInstance();
	CMsgLANServerAvailable::default_instance_->InitAsDefaultInstance();
	CSOEconGameAccountClient::default_instance_->InitAsDefaultInstance();
	CSOItemCriteriaCondition::default_instance_->InitAsDefaultInstance();
	CSOItemCriteria::default_instance_->InitAsDefaultInstance();
	CSOItemRecipe::default_instance_->InitAsDefaultInstance();
	CMsgDevNewItemRequest::default_instance_->InitAsDefaultInstance();
	CMsgIncrementKillCountAttribute::default_instance_->InitAsDefaultInstance();
	CMsgApplySticker::default_instance_->InitAsDefaultInstance();
	CMsgApplyStatTrakSwap::default_instance_->InitAsDefaultInstance();
	CMsgApplyStrangePart::default_instance_->InitAsDefaultInstance();
	CMsgApplyPennantUpgrade::default_instance_->InitAsDefaultInstance();
	CMsgApplyEggEssence::default_instance_->InitAsDefaultInstance();
	CSOEconItemAttribute::default_instance_->InitAsDefaultInstance();
	CSOEconItemEquipped::default_instance_->InitAsDefaultInstance();
	CSOEconItem::default_instance_->InitAsDefaultInstance();
	CMsgAdjustItemEquippedState::default_instance_->InitAsDefaultInstance();
	CMsgSortItems::default_instance_->InitAsDefaultInstance();
	CSOEconClaimCode::default_instance_->InitAsDefaultInstance();
	CMsgStoreGetUserData::default_instance_->InitAsDefaultInstance();
	CMsgStoreGetUserDataResponse::default_instance_->InitAsDefaultInstance();
	CMsgUpdateItemSchema::default_instance_->InitAsDefaultInstance();
	CMsgGCError::default_instance_->InitAsDefaultInstance();
	CMsgRequestInventoryRefresh::default_instance_->InitAsDefaultInstance();
	CMsgConVarValue::default_instance_->InitAsDefaultInstance();
	CMsgReplicateConVars::default_instance_->InitAsDefaultInstance();
	CMsgUseItem::default_instance_->InitAsDefaultInstance();
	CMsgReplayUploadedToYouTube::default_instance_->InitAsDefaultInstance();
	CMsgConsumableExhausted::default_instance_->InitAsDefaultInstance();
	CMsgItemAcknowledged__DEPRECATED::default_instance_->InitAsDefaultInstance();
	CMsgSetItemPositions::default_instance_->InitAsDefaultInstance();
	CMsgSetItemPositions_ItemPosition::default_instance_->InitAsDefaultInstance();
	CMsgGCReportAbuse::default_instance_->InitAsDefaultInstance();
	CMsgGCReportAbuseResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCNameItemNotification::default_instance_->InitAsDefaultInstance();
	CMsgGCClientDisplayNotification::default_instance_->InitAsDefaultInstance();
	CMsgGCShowItemsPickedUp::default_instance_->InitAsDefaultInstance();
	CMsgGCIncrementKillCountResponse::default_instance_->InitAsDefaultInstance();
	CSOEconItemDropRateBonus::default_instance_->InitAsDefaultInstance();
	CSOEconItemLeagueViewPass::default_instance_->InitAsDefaultInstance();
	CSOEconItemEventTicket::default_instance_->InitAsDefaultInstance();
	CMsgGCItemPreviewItemBoughtNotification::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseCancel::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseCancelResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseFinalize::default_instance_->InitAsDefaultInstance();
	CMsgGCStorePurchaseFinalizeResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCBannedWordListRequest::default_instance_->InitAsDefaultInstance();
	CMsgGCRequestAnnouncements::default_instance_->InitAsDefaultInstance();
	CMsgGCRequestAnnouncementsResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCBannedWord::default_instance_->InitAsDefaultInstance();
	CMsgGCBannedWordListResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCBannedWordListBroadcast::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCBannedWordListUpdated::default_instance_->InitAsDefaultInstance();
	CSOEconDefaultEquippedDefinitionInstanceClient::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCDirtySDOCache::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCDirtyMultipleSDOCache::default_instance_->InitAsDefaultInstance();
	CMsgGCCollectItem::default_instance_->InitAsDefaultInstance();
	CMsgSDONoMemcached::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCUpdateSQLKeyValue::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCIsTrustedServer::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCIsTrustedServerResponse::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCBroadcastConsoleCommand::default_instance_->InitAsDefaultInstance();
	CMsgGCServerVersionUpdated::default_instance_->InitAsDefaultInstance();
	CMsgGCClientVersionUpdated::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCWebAPIAccountChanged::default_instance_->InitAsDefaultInstance();
	CMsgGCToGCRequestPassportItemGrant::default_instance_->InitAsDefaultInstance();
	CMsgGameServerInfo::default_instance_->InitAsDefaultInstance();
	::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_5fgcmessages_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_5fgcmessages_2eproto {
	StaticDescriptorInitializer_base_5fgcmessages_2eproto() {
		protobuf_AddDesc_base_5fgcmessages_2eproto();
	}
} static_descriptor_initializer_base_5fgcmessages_2eproto_;
const ::google::protobuf::EnumDescriptor* EGCBaseMsg_descriptor() {
	protobuf_AssignDescriptorsOnce();
	return EGCBaseMsg_descriptor_;
}
bool EGCBaseMsg_IsValid(int value) {
	switch (value) {
	case 4001:
	case 4002:
	case 4003:
	case 4008:
	case 4501:
	case 4502:
	case 4503:
	case 4504:
	case 4505:
	case 4506:
	case 4507:
	case 4508:
	case 4509:
	case 4510:
	case 4511:
		return true;
	default:
		return false;
	}
}

const ::google::protobuf::EnumDescriptor* EGCBaseProtoObjectTypes_descriptor() {
	protobuf_AssignDescriptorsOnce();
	return EGCBaseProtoObjectTypes_descriptor_;
}
bool EGCBaseProtoObjectTypes_IsValid(int value) {
	switch (value) {
	case 1001:
	case 1002:
		return true;
	default:
		return false;
	}
}

const ::google::protobuf::EnumDescriptor* GC_BannedWordType_descriptor() {
	protobuf_AssignDescriptorsOnce();
	return GC_BannedWordType_descriptor_;
}
bool GC_BannedWordType_IsValid(int value) {
	switch (value) {
	case 0:
	case 1:
		return true;
	default:
		return false;
	}
}


// ===================================================================

#ifndef _MSC_VER
const int CGCStorePurchaseInit_LineItem::kItemDefIdFieldNumber;
const int CGCStorePurchaseInit_LineItem::kQuantityFieldNumber;
const int CGCStorePurchaseInit_LineItem::kCostInLocalCurrencyFieldNumber;
const int CGCStorePurchaseInit_LineItem::kPurchaseTypeFieldNumber;
#endif  // !_MSC_VER

CGCStorePurchaseInit_LineItem::CGCStorePurchaseInit_LineItem()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CGCStorePurchaseInit_LineItem::InitAsDefaultInstance() {
}

CGCStorePurchaseInit_LineItem::CGCStorePurchaseInit_LineItem(const CGCStorePurchaseInit_LineItem& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CGCStorePurchaseInit_LineItem::SharedCtor() {
	_cached_size_ = 0;
	item_def_id_ = 0u;
	quantity_ = 0u;
	cost_in_local_currency_ = 0u;
	purchase_type_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CGCStorePurchaseInit_LineItem::~CGCStorePurchaseInit_LineItem() {
	SharedDtor();
}

void CGCStorePurchaseInit_LineItem::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CGCStorePurchaseInit_LineItem::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CGCStorePurchaseInit_LineItem::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CGCStorePurchaseInit_LineItem_descriptor_;
}

const CGCStorePurchaseInit_LineItem& CGCStorePurchaseInit_LineItem::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CGCStorePurchaseInit_LineItem* CGCStorePurchaseInit_LineItem::default_instance_ = NULL;

CGCStorePurchaseInit_LineItem* CGCStorePurchaseInit_LineItem::New() const {
	return new CGCStorePurchaseInit_LineItem;
}

void CGCStorePurchaseInit_LineItem::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_def_id_ = 0u;
		quantity_ = 0u;
		cost_in_local_currency_ = 0u;
		purchase_type_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CGCStorePurchaseInit_LineItem::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 item_def_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_def_id_)));
				set_has_item_def_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_quantity;
			break;
		}

			  // optional uint32 quantity = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_quantity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &quantity_)));
				set_has_quantity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_cost_in_local_currency;
			break;
		}

			  // optional uint32 cost_in_local_currency = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_cost_in_local_currency:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &cost_in_local_currency_)));
				set_has_cost_in_local_currency();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_purchase_type;
			break;
		}

			  // optional uint32 purchase_type = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_purchase_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &purchase_type_)));
				set_has_purchase_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CGCStorePurchaseInit_LineItem::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 item_def_id = 1;
	if (has_item_def_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->item_def_id(), output);
	}

	// optional uint32 quantity = 2;
	if (has_quantity()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->quantity(), output);
	}

	// optional uint32 cost_in_local_currency = 3;
	if (has_cost_in_local_currency()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->cost_in_local_currency(), output);
	}

	// optional uint32 purchase_type = 4;
	if (has_purchase_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->purchase_type(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CGCStorePurchaseInit_LineItem::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 item_def_id = 1;
	if (has_item_def_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->item_def_id(), target);
	}

	// optional uint32 quantity = 2;
	if (has_quantity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->quantity(), target);
	}

	// optional uint32 cost_in_local_currency = 3;
	if (has_cost_in_local_currency()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->cost_in_local_currency(), target);
	}

	// optional uint32 purchase_type = 4;
	if (has_purchase_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->purchase_type(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CGCStorePurchaseInit_LineItem::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 item_def_id = 1;
		if (has_item_def_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_def_id());
		}

		// optional uint32 quantity = 2;
		if (has_quantity()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->quantity());
		}

		// optional uint32 cost_in_local_currency = 3;
		if (has_cost_in_local_currency()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->cost_in_local_currency());
		}

		// optional uint32 purchase_type = 4;
		if (has_purchase_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->purchase_type());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CGCStorePurchaseInit_LineItem::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CGCStorePurchaseInit_LineItem* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CGCStorePurchaseInit_LineItem*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CGCStorePurchaseInit_LineItem::MergeFrom(const CGCStorePurchaseInit_LineItem& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_def_id()) {
			set_item_def_id(from.item_def_id());
		}
		if (from.has_quantity()) {
			set_quantity(from.quantity());
		}
		if (from.has_cost_in_local_currency()) {
			set_cost_in_local_currency(from.cost_in_local_currency());
		}
		if (from.has_purchase_type()) {
			set_purchase_type(from.purchase_type());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CGCStorePurchaseInit_LineItem::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CGCStorePurchaseInit_LineItem::CopyFrom(const CGCStorePurchaseInit_LineItem& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CGCStorePurchaseInit_LineItem::IsInitialized() const {

	return true;
}

void CGCStorePurchaseInit_LineItem::Swap(CGCStorePurchaseInit_LineItem* other) {
	if (other != this) {
		std::swap(item_def_id_, other->item_def_id_);
		std::swap(quantity_, other->quantity_);
		std::swap(cost_in_local_currency_, other->cost_in_local_currency_);
		std::swap(purchase_type_, other->purchase_type_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CGCStorePurchaseInit_LineItem::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CGCStorePurchaseInit_LineItem_descriptor_;
	metadata.reflection = CGCStorePurchaseInit_LineItem_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseInit::kCountryFieldNumber;
const int CMsgGCStorePurchaseInit::kLanguageFieldNumber;
const int CMsgGCStorePurchaseInit::kCurrencyFieldNumber;
const int CMsgGCStorePurchaseInit::kLineItemsFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseInit::CMsgGCStorePurchaseInit()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseInit::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseInit::CMsgGCStorePurchaseInit(const CMsgGCStorePurchaseInit& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseInit::SharedCtor() {
	_cached_size_ = 0;
	country_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	language_ = 0;
	currency_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseInit::~CMsgGCStorePurchaseInit() {
	SharedDtor();
}

void CMsgGCStorePurchaseInit::SharedDtor() {
	if (country_ != &::google::protobuf::internal::kEmptyString) {
		delete country_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseInit::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseInit::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseInit_descriptor_;
}

const CMsgGCStorePurchaseInit& CMsgGCStorePurchaseInit::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseInit* CMsgGCStorePurchaseInit::default_instance_ = NULL;

CMsgGCStorePurchaseInit* CMsgGCStorePurchaseInit::New() const {
	return new CMsgGCStorePurchaseInit;
}

void CMsgGCStorePurchaseInit::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_country()) {
			if (country_ != &::google::protobuf::internal::kEmptyString) {
				country_->clear();
			}
		}
		language_ = 0;
		currency_ = 0;
	}
	line_items_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseInit::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string country = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_country()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->country().data(), this->country().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_language;
			break;
		}

			  // optional int32 language = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_language:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &language_)));
				set_has_language();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_currency;
			break;
		}

			  // optional int32 currency = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_currency:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &currency_)));
				set_has_currency();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_line_items;
			break;
		}

			  // repeated .CGCStorePurchaseInit_LineItem line_items = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_line_items:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_line_items()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_line_items;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseInit::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string country = 1;
	if (has_country()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->country().data(), this->country().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->country(), output);
	}

	// optional int32 language = 2;
	if (has_language()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->language(), output);
	}

	// optional int32 currency = 3;
	if (has_currency()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->currency(), output);
	}

	// repeated .CGCStorePurchaseInit_LineItem line_items = 4;
	for (int i = 0; i < this->line_items_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			4, this->line_items(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseInit::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string country = 1;
	if (has_country()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->country().data(), this->country().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->country(), target);
	}

	// optional int32 language = 2;
	if (has_language()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->language(), target);
	}

	// optional int32 currency = 3;
	if (has_currency()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->currency(), target);
	}

	// repeated .CGCStorePurchaseInit_LineItem line_items = 4;
	for (int i = 0; i < this->line_items_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				4, this->line_items(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseInit::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string country = 1;
		if (has_country()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->country());
		}

		// optional int32 language = 2;
		if (has_language()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->language());
		}

		// optional int32 currency = 3;
		if (has_currency()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->currency());
		}

	}
	// repeated .CGCStorePurchaseInit_LineItem line_items = 4;
	total_size += 1 * this->line_items_size();
	for (int i = 0; i < this->line_items_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->line_items(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseInit::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseInit* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseInit*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseInit::MergeFrom(const CMsgGCStorePurchaseInit& from) {
	GOOGLE_CHECK_NE(&from, this);
	line_items_.MergeFrom(from.line_items_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_country()) {
			set_country(from.country());
		}
		if (from.has_language()) {
			set_language(from.language());
		}
		if (from.has_currency()) {
			set_currency(from.currency());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseInit::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseInit::CopyFrom(const CMsgGCStorePurchaseInit& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseInit::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseInit::Swap(CMsgGCStorePurchaseInit* other) {
	if (other != this) {
		std::swap(country_, other->country_);
		std::swap(language_, other->language_);
		std::swap(currency_, other->currency_);
		line_items_.Swap(&other->line_items_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseInit::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseInit_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseInit_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseInitResponse::kResultFieldNumber;
const int CMsgGCStorePurchaseInitResponse::kTxnIdFieldNumber;
const int CMsgGCStorePurchaseInitResponse::kUrlFieldNumber;
const int CMsgGCStorePurchaseInitResponse::kItemIdsFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseInitResponse::CMsgGCStorePurchaseInitResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseInitResponse::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseInitResponse::CMsgGCStorePurchaseInitResponse(const CMsgGCStorePurchaseInitResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseInitResponse::SharedCtor() {
	_cached_size_ = 0;
	result_ = 0;
	txn_id_ = GOOGLE_ULONGLONG(0);
	url_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseInitResponse::~CMsgGCStorePurchaseInitResponse() {
	SharedDtor();
}

void CMsgGCStorePurchaseInitResponse::SharedDtor() {
	if (url_ != &::google::protobuf::internal::kEmptyString) {
		delete url_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseInitResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseInitResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseInitResponse_descriptor_;
}

const CMsgGCStorePurchaseInitResponse& CMsgGCStorePurchaseInitResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseInitResponse* CMsgGCStorePurchaseInitResponse::default_instance_ = NULL;

CMsgGCStorePurchaseInitResponse* CMsgGCStorePurchaseInitResponse::New() const {
	return new CMsgGCStorePurchaseInitResponse;
}

void CMsgGCStorePurchaseInitResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		result_ = 0;
		txn_id_ = GOOGLE_ULONGLONG(0);
		if (has_url()) {
			if (url_ != &::google::protobuf::internal::kEmptyString) {
				url_->clear();
			}
		}
	}
	item_ids_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseInitResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional int32 result = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &result_)));
				set_has_result();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_txn_id;
			break;
		}

			  // optional uint64 txn_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_txn_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &txn_id_)));
				set_has_txn_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_url;
			break;
		}

			  // optional string url = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_url:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_url()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->url().data(), this->url().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_item_ids;
			break;
		}

			  // repeated uint64 item_ids = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_ids:
				DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						1, 32, input, this->mutable_item_ids())));
			}
			else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
				== ::google::protobuf::internal::WireFormatLite::
				WIRETYPE_LENGTH_DELIMITED) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, this->mutable_item_ids())));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_item_ids;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseInitResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional int32 result = 1;
	if (has_result()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
	}

	// optional uint64 txn_id = 2;
	if (has_txn_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->txn_id(), output);
	}

	// optional string url = 3;
	if (has_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->url().data(), this->url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->url(), output);
	}

	// repeated uint64 item_ids = 4;
	for (int i = 0; i < this->item_ids_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(
			4, this->item_ids(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseInitResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional int32 result = 1;
	if (has_result()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
	}

	// optional uint64 txn_id = 2;
	if (has_txn_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->txn_id(), target);
	}

	// optional string url = 3;
	if (has_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->url().data(), this->url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->url(), target);
	}

	// repeated uint64 item_ids = 4;
	for (int i = 0; i < this->item_ids_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteUInt64ToArray(4, this->item_ids(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseInitResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional int32 result = 1;
		if (has_result()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->result());
		}

		// optional uint64 txn_id = 2;
		if (has_txn_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->txn_id());
		}

		// optional string url = 3;
		if (has_url()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->url());
		}

	}
	// repeated uint64 item_ids = 4;
	{
		int data_size = 0;
		for (int i = 0; i < this->item_ids_size(); i++) {
			data_size += ::google::protobuf::internal::WireFormatLite::
				UInt64Size(this->item_ids(i));
		}
		total_size += 1 * this->item_ids_size() + data_size;
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseInitResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseInitResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseInitResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseInitResponse::MergeFrom(const CMsgGCStorePurchaseInitResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	item_ids_.MergeFrom(from.item_ids_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_result()) {
			set_result(from.result());
		}
		if (from.has_txn_id()) {
			set_txn_id(from.txn_id());
		}
		if (from.has_url()) {
			set_url(from.url());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseInitResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseInitResponse::CopyFrom(const CMsgGCStorePurchaseInitResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseInitResponse::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseInitResponse::Swap(CMsgGCStorePurchaseInitResponse* other) {
	if (other != this) {
		std::swap(result_, other->result_);
		std::swap(txn_id_, other->txn_id_);
		std::swap(url_, other->url_);
		item_ids_.Swap(&other->item_ids_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseInitResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseInitResponse_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseInitResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOPartyInvite::kGroupIdFieldNumber;
const int CSOPartyInvite::kSenderIdFieldNumber;
const int CSOPartyInvite::kSenderNameFieldNumber;
#endif  // !_MSC_VER

CSOPartyInvite::CSOPartyInvite()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOPartyInvite::InitAsDefaultInstance() {
}

CSOPartyInvite::CSOPartyInvite(const CSOPartyInvite& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOPartyInvite::SharedCtor() {
	_cached_size_ = 0;
	group_id_ = GOOGLE_ULONGLONG(0);
	sender_id_ = GOOGLE_ULONGLONG(0);
	sender_name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOPartyInvite::~CSOPartyInvite() {
	SharedDtor();
}

void CSOPartyInvite::SharedDtor() {
	if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
		delete sender_name_;
	}
	if (this != default_instance_) {
	}
}

void CSOPartyInvite::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOPartyInvite::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOPartyInvite_descriptor_;
}

const CSOPartyInvite& CSOPartyInvite::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOPartyInvite* CSOPartyInvite::default_instance_ = NULL;

CSOPartyInvite* CSOPartyInvite::New() const {
	return new CSOPartyInvite;
}

void CSOPartyInvite::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		group_id_ = GOOGLE_ULONGLONG(0);
		sender_id_ = GOOGLE_ULONGLONG(0);
		if (has_sender_name()) {
			if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
				sender_name_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOPartyInvite::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &group_id_)));
				set_has_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(17)) goto parse_sender_id;
			break;
		}

			  // optional fixed64 sender_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_sender_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &sender_id_)));
				set_has_sender_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_sender_name;
			break;
		}

			  // optional string sender_name = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_sender_name:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_sender_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->sender_name().data(), this->sender_name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOPartyInvite::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->group_id(), output);
	}

	// optional fixed64 sender_id = 2;
	if (has_sender_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->sender_id(), output);
	}

	// optional string sender_name = 3;
	if (has_sender_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->sender_name().data(), this->sender_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->sender_name(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOPartyInvite::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->group_id(), target);
	}

	// optional fixed64 sender_id = 2;
	if (has_sender_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->sender_id(), target);
	}

	// optional string sender_name = 3;
	if (has_sender_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->sender_name().data(), this->sender_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->sender_name(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOPartyInvite::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 group_id = 1;
		if (has_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->group_id());
		}

		// optional fixed64 sender_id = 2;
		if (has_sender_id()) {
			total_size += 1 + 8;
		}

		// optional string sender_name = 3;
		if (has_sender_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->sender_name());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOPartyInvite::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOPartyInvite* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOPartyInvite*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOPartyInvite::MergeFrom(const CSOPartyInvite& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_group_id()) {
			set_group_id(from.group_id());
		}
		if (from.has_sender_id()) {
			set_sender_id(from.sender_id());
		}
		if (from.has_sender_name()) {
			set_sender_name(from.sender_name());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOPartyInvite::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOPartyInvite::CopyFrom(const CSOPartyInvite& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOPartyInvite::IsInitialized() const {

	return true;
}

void CSOPartyInvite::Swap(CSOPartyInvite* other) {
	if (other != this) {
		std::swap(group_id_, other->group_id_);
		std::swap(sender_id_, other->sender_id_);
		std::swap(sender_name_, other->sender_name_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOPartyInvite::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOPartyInvite_descriptor_;
	metadata.reflection = CSOPartyInvite_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOLobbyInvite::kGroupIdFieldNumber;
const int CSOLobbyInvite::kSenderIdFieldNumber;
const int CSOLobbyInvite::kSenderNameFieldNumber;
#endif  // !_MSC_VER

CSOLobbyInvite::CSOLobbyInvite()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOLobbyInvite::InitAsDefaultInstance() {
}

CSOLobbyInvite::CSOLobbyInvite(const CSOLobbyInvite& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOLobbyInvite::SharedCtor() {
	_cached_size_ = 0;
	group_id_ = GOOGLE_ULONGLONG(0);
	sender_id_ = GOOGLE_ULONGLONG(0);
	sender_name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOLobbyInvite::~CSOLobbyInvite() {
	SharedDtor();
}

void CSOLobbyInvite::SharedDtor() {
	if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
		delete sender_name_;
	}
	if (this != default_instance_) {
	}
}

void CSOLobbyInvite::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOLobbyInvite::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOLobbyInvite_descriptor_;
}

const CSOLobbyInvite& CSOLobbyInvite::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOLobbyInvite* CSOLobbyInvite::default_instance_ = NULL;

CSOLobbyInvite* CSOLobbyInvite::New() const {
	return new CSOLobbyInvite;
}

void CSOLobbyInvite::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		group_id_ = GOOGLE_ULONGLONG(0);
		sender_id_ = GOOGLE_ULONGLONG(0);
		if (has_sender_name()) {
			if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
				sender_name_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOLobbyInvite::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &group_id_)));
				set_has_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(17)) goto parse_sender_id;
			break;
		}

			  // optional fixed64 sender_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_sender_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &sender_id_)));
				set_has_sender_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_sender_name;
			break;
		}

			  // optional string sender_name = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_sender_name:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_sender_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->sender_name().data(), this->sender_name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOLobbyInvite::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->group_id(), output);
	}

	// optional fixed64 sender_id = 2;
	if (has_sender_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->sender_id(), output);
	}

	// optional string sender_name = 3;
	if (has_sender_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->sender_name().data(), this->sender_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->sender_name(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOLobbyInvite::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->group_id(), target);
	}

	// optional fixed64 sender_id = 2;
	if (has_sender_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->sender_id(), target);
	}

	// optional string sender_name = 3;
	if (has_sender_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->sender_name().data(), this->sender_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->sender_name(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOLobbyInvite::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 group_id = 1;
		if (has_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->group_id());
		}

		// optional fixed64 sender_id = 2;
		if (has_sender_id()) {
			total_size += 1 + 8;
		}

		// optional string sender_name = 3;
		if (has_sender_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->sender_name());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOLobbyInvite::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOLobbyInvite* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOLobbyInvite*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOLobbyInvite::MergeFrom(const CSOLobbyInvite& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_group_id()) {
			set_group_id(from.group_id());
		}
		if (from.has_sender_id()) {
			set_sender_id(from.sender_id());
		}
		if (from.has_sender_name()) {
			set_sender_name(from.sender_name());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOLobbyInvite::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOLobbyInvite::CopyFrom(const CSOLobbyInvite& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOLobbyInvite::IsInitialized() const {

	return true;
}

void CSOLobbyInvite::Swap(CSOLobbyInvite* other) {
	if (other != this) {
		std::swap(group_id_, other->group_id_);
		std::swap(sender_id_, other->sender_id_);
		std::swap(sender_name_, other->sender_name_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOLobbyInvite::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOLobbyInvite_descriptor_;
	metadata.reflection = CSOLobbyInvite_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgSystemBroadcast::kMessageFieldNumber;
#endif  // !_MSC_VER

CMsgSystemBroadcast::CMsgSystemBroadcast()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgSystemBroadcast::InitAsDefaultInstance() {
}

CMsgSystemBroadcast::CMsgSystemBroadcast(const CMsgSystemBroadcast& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgSystemBroadcast::SharedCtor() {
	_cached_size_ = 0;
	message_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgSystemBroadcast::~CMsgSystemBroadcast() {
	SharedDtor();
}

void CMsgSystemBroadcast::SharedDtor() {
	if (message_ != &::google::protobuf::internal::kEmptyString) {
		delete message_;
	}
	if (this != default_instance_) {
	}
}

void CMsgSystemBroadcast::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgSystemBroadcast::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgSystemBroadcast_descriptor_;
}

const CMsgSystemBroadcast& CMsgSystemBroadcast::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgSystemBroadcast* CMsgSystemBroadcast::default_instance_ = NULL;

CMsgSystemBroadcast* CMsgSystemBroadcast::New() const {
	return new CMsgSystemBroadcast;
}

void CMsgSystemBroadcast::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_message()) {
			if (message_ != &::google::protobuf::internal::kEmptyString) {
				message_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgSystemBroadcast::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string message = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_message()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->message().data(), this->message().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgSystemBroadcast::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string message = 1;
	if (has_message()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->message().data(), this->message().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->message(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgSystemBroadcast::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string message = 1;
	if (has_message()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->message().data(), this->message().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->message(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgSystemBroadcast::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string message = 1;
		if (has_message()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->message());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgSystemBroadcast::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgSystemBroadcast* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgSystemBroadcast*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgSystemBroadcast::MergeFrom(const CMsgSystemBroadcast& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_message()) {
			set_message(from.message());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgSystemBroadcast::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgSystemBroadcast::CopyFrom(const CMsgSystemBroadcast& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgSystemBroadcast::IsInitialized() const {

	return true;
}

void CMsgSystemBroadcast::Swap(CMsgSystemBroadcast* other) {
	if (other != this) {
		std::swap(message_, other->message_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgSystemBroadcast::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgSystemBroadcast_descriptor_;
	metadata.reflection = CMsgSystemBroadcast_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgInviteToParty::kSteamIdFieldNumber;
const int CMsgInviteToParty::kClientVersionFieldNumber;
const int CMsgInviteToParty::kTeamInviteFieldNumber;
#endif  // !_MSC_VER

CMsgInviteToParty::CMsgInviteToParty()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgInviteToParty::InitAsDefaultInstance() {
}

CMsgInviteToParty::CMsgInviteToParty(const CMsgInviteToParty& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgInviteToParty::SharedCtor() {
	_cached_size_ = 0;
	steam_id_ = GOOGLE_ULONGLONG(0);
	client_version_ = 0u;
	team_invite_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgInviteToParty::~CMsgInviteToParty() {
	SharedDtor();
}

void CMsgInviteToParty::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgInviteToParty::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgInviteToParty::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgInviteToParty_descriptor_;
}

const CMsgInviteToParty& CMsgInviteToParty::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgInviteToParty* CMsgInviteToParty::default_instance_ = NULL;

CMsgInviteToParty* CMsgInviteToParty::New() const {
	return new CMsgInviteToParty;
}

void CMsgInviteToParty::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		steam_id_ = GOOGLE_ULONGLONG(0);
		client_version_ = 0u;
		team_invite_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgInviteToParty::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &steam_id_)));
				set_has_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_client_version;
			break;
		}

			  // optional uint32 client_version = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_client_version:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &client_version_)));
				set_has_client_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_team_invite;
			break;
		}

			  // optional uint32 team_invite = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_team_invite:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &team_invite_)));
				set_has_team_invite();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgInviteToParty::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->steam_id(), output);
	}

	// optional uint32 client_version = 2;
	if (has_client_version()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->client_version(), output);
	}

	// optional uint32 team_invite = 3;
	if (has_team_invite()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->team_invite(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgInviteToParty::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->steam_id(), target);
	}

	// optional uint32 client_version = 2;
	if (has_client_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->client_version(), target);
	}

	// optional uint32 team_invite = 3;
	if (has_team_invite()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->team_invite(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgInviteToParty::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 steam_id = 1;
		if (has_steam_id()) {
			total_size += 1 + 8;
		}

		// optional uint32 client_version = 2;
		if (has_client_version()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->client_version());
		}

		// optional uint32 team_invite = 3;
		if (has_team_invite()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->team_invite());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgInviteToParty::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgInviteToParty* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgInviteToParty*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgInviteToParty::MergeFrom(const CMsgInviteToParty& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_steam_id()) {
			set_steam_id(from.steam_id());
		}
		if (from.has_client_version()) {
			set_client_version(from.client_version());
		}
		if (from.has_team_invite()) {
			set_team_invite(from.team_invite());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgInviteToParty::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgInviteToParty::CopyFrom(const CMsgInviteToParty& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgInviteToParty::IsInitialized() const {

	return true;
}

void CMsgInviteToParty::Swap(CMsgInviteToParty* other) {
	if (other != this) {
		std::swap(steam_id_, other->steam_id_);
		std::swap(client_version_, other->client_version_);
		std::swap(team_invite_, other->team_invite_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgInviteToParty::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgInviteToParty_descriptor_;
	metadata.reflection = CMsgInviteToParty_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgInvitationCreated::kGroupIdFieldNumber;
const int CMsgInvitationCreated::kSteamIdFieldNumber;
#endif  // !_MSC_VER

CMsgInvitationCreated::CMsgInvitationCreated()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgInvitationCreated::InitAsDefaultInstance() {
}

CMsgInvitationCreated::CMsgInvitationCreated(const CMsgInvitationCreated& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgInvitationCreated::SharedCtor() {
	_cached_size_ = 0;
	group_id_ = GOOGLE_ULONGLONG(0);
	steam_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgInvitationCreated::~CMsgInvitationCreated() {
	SharedDtor();
}

void CMsgInvitationCreated::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgInvitationCreated::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgInvitationCreated::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgInvitationCreated_descriptor_;
}

const CMsgInvitationCreated& CMsgInvitationCreated::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgInvitationCreated* CMsgInvitationCreated::default_instance_ = NULL;

CMsgInvitationCreated* CMsgInvitationCreated::New() const {
	return new CMsgInvitationCreated;
}

void CMsgInvitationCreated::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		group_id_ = GOOGLE_ULONGLONG(0);
		steam_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgInvitationCreated::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &group_id_)));
				set_has_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(17)) goto parse_steam_id;
			break;
		}

			  // optional fixed64 steam_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_steam_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &steam_id_)));
				set_has_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgInvitationCreated::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->group_id(), output);
	}

	// optional fixed64 steam_id = 2;
	if (has_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->steam_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgInvitationCreated::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 group_id = 1;
	if (has_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->group_id(), target);
	}

	// optional fixed64 steam_id = 2;
	if (has_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->steam_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgInvitationCreated::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 group_id = 1;
		if (has_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->group_id());
		}

		// optional fixed64 steam_id = 2;
		if (has_steam_id()) {
			total_size += 1 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgInvitationCreated::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgInvitationCreated* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgInvitationCreated*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgInvitationCreated::MergeFrom(const CMsgInvitationCreated& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_group_id()) {
			set_group_id(from.group_id());
		}
		if (from.has_steam_id()) {
			set_steam_id(from.steam_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgInvitationCreated::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgInvitationCreated::CopyFrom(const CMsgInvitationCreated& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgInvitationCreated::IsInitialized() const {

	return true;
}

void CMsgInvitationCreated::Swap(CMsgInvitationCreated* other) {
	if (other != this) {
		std::swap(group_id_, other->group_id_);
		std::swap(steam_id_, other->steam_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgInvitationCreated::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgInvitationCreated_descriptor_;
	metadata.reflection = CMsgInvitationCreated_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgPartyInviteResponse::kPartyIdFieldNumber;
const int CMsgPartyInviteResponse::kAcceptFieldNumber;
const int CMsgPartyInviteResponse::kClientVersionFieldNumber;
const int CMsgPartyInviteResponse::kTeamInviteFieldNumber;
#endif  // !_MSC_VER

CMsgPartyInviteResponse::CMsgPartyInviteResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgPartyInviteResponse::InitAsDefaultInstance() {
}

CMsgPartyInviteResponse::CMsgPartyInviteResponse(const CMsgPartyInviteResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgPartyInviteResponse::SharedCtor() {
	_cached_size_ = 0;
	party_id_ = GOOGLE_ULONGLONG(0);
	accept_ = false;
	client_version_ = 0u;
	team_invite_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgPartyInviteResponse::~CMsgPartyInviteResponse() {
	SharedDtor();
}

void CMsgPartyInviteResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgPartyInviteResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgPartyInviteResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgPartyInviteResponse_descriptor_;
}

const CMsgPartyInviteResponse& CMsgPartyInviteResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgPartyInviteResponse* CMsgPartyInviteResponse::default_instance_ = NULL;

CMsgPartyInviteResponse* CMsgPartyInviteResponse::New() const {
	return new CMsgPartyInviteResponse;
}

void CMsgPartyInviteResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		party_id_ = GOOGLE_ULONGLONG(0);
		accept_ = false;
		client_version_ = 0u;
		team_invite_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgPartyInviteResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 party_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &party_id_)));
				set_has_party_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_accept;
			break;
		}

			  // optional bool accept = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_accept:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &accept_)));
				set_has_accept();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_client_version;
			break;
		}

			  // optional uint32 client_version = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_client_version:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &client_version_)));
				set_has_client_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_team_invite;
			break;
		}

			  // optional uint32 team_invite = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_team_invite:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &team_invite_)));
				set_has_team_invite();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgPartyInviteResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 party_id = 1;
	if (has_party_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->party_id(), output);
	}

	// optional bool accept = 2;
	if (has_accept()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(2, this->accept(), output);
	}

	// optional uint32 client_version = 3;
	if (has_client_version()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->client_version(), output);
	}

	// optional uint32 team_invite = 4;
	if (has_team_invite()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->team_invite(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgPartyInviteResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 party_id = 1;
	if (has_party_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->party_id(), target);
	}

	// optional bool accept = 2;
	if (has_accept()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->accept(), target);
	}

	// optional uint32 client_version = 3;
	if (has_client_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->client_version(), target);
	}

	// optional uint32 team_invite = 4;
	if (has_team_invite()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->team_invite(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgPartyInviteResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 party_id = 1;
		if (has_party_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->party_id());
		}

		// optional bool accept = 2;
		if (has_accept()) {
			total_size += 1 + 1;
		}

		// optional uint32 client_version = 3;
		if (has_client_version()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->client_version());
		}

		// optional uint32 team_invite = 4;
		if (has_team_invite()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->team_invite());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgPartyInviteResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgPartyInviteResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgPartyInviteResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgPartyInviteResponse::MergeFrom(const CMsgPartyInviteResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_party_id()) {
			set_party_id(from.party_id());
		}
		if (from.has_accept()) {
			set_accept(from.accept());
		}
		if (from.has_client_version()) {
			set_client_version(from.client_version());
		}
		if (from.has_team_invite()) {
			set_team_invite(from.team_invite());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgPartyInviteResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgPartyInviteResponse::CopyFrom(const CMsgPartyInviteResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgPartyInviteResponse::IsInitialized() const {

	return true;
}

void CMsgPartyInviteResponse::Swap(CMsgPartyInviteResponse* other) {
	if (other != this) {
		std::swap(party_id_, other->party_id_);
		std::swap(accept_, other->accept_);
		std::swap(client_version_, other->client_version_);
		std::swap(team_invite_, other->team_invite_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgPartyInviteResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgPartyInviteResponse_descriptor_;
	metadata.reflection = CMsgPartyInviteResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgKickFromParty::kSteamIdFieldNumber;
#endif  // !_MSC_VER

CMsgKickFromParty::CMsgKickFromParty()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgKickFromParty::InitAsDefaultInstance() {
}

CMsgKickFromParty::CMsgKickFromParty(const CMsgKickFromParty& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgKickFromParty::SharedCtor() {
	_cached_size_ = 0;
	steam_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgKickFromParty::~CMsgKickFromParty() {
	SharedDtor();
}

void CMsgKickFromParty::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgKickFromParty::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgKickFromParty::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgKickFromParty_descriptor_;
}

const CMsgKickFromParty& CMsgKickFromParty::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgKickFromParty* CMsgKickFromParty::default_instance_ = NULL;

CMsgKickFromParty* CMsgKickFromParty::New() const {
	return new CMsgKickFromParty;
}

void CMsgKickFromParty::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		steam_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgKickFromParty::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &steam_id_)));
				set_has_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgKickFromParty::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->steam_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgKickFromParty::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->steam_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgKickFromParty::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 steam_id = 1;
		if (has_steam_id()) {
			total_size += 1 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgKickFromParty::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgKickFromParty* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgKickFromParty*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgKickFromParty::MergeFrom(const CMsgKickFromParty& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_steam_id()) {
			set_steam_id(from.steam_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgKickFromParty::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgKickFromParty::CopyFrom(const CMsgKickFromParty& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgKickFromParty::IsInitialized() const {

	return true;
}

void CMsgKickFromParty::Swap(CMsgKickFromParty* other) {
	if (other != this) {
		std::swap(steam_id_, other->steam_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgKickFromParty::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgKickFromParty_descriptor_;
	metadata.reflection = CMsgKickFromParty_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgLeaveParty::CMsgLeaveParty()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgLeaveParty::InitAsDefaultInstance() {
}

CMsgLeaveParty::CMsgLeaveParty(const CMsgLeaveParty& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgLeaveParty::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgLeaveParty::~CMsgLeaveParty() {
	SharedDtor();
}

void CMsgLeaveParty::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgLeaveParty::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgLeaveParty::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgLeaveParty_descriptor_;
}

const CMsgLeaveParty& CMsgLeaveParty::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgLeaveParty* CMsgLeaveParty::default_instance_ = NULL;

CMsgLeaveParty* CMsgLeaveParty::New() const {
	return new CMsgLeaveParty;
}

void CMsgLeaveParty::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgLeaveParty::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgLeaveParty::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgLeaveParty::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgLeaveParty::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgLeaveParty::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgLeaveParty* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgLeaveParty*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgLeaveParty::MergeFrom(const CMsgLeaveParty& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgLeaveParty::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgLeaveParty::CopyFrom(const CMsgLeaveParty& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgLeaveParty::IsInitialized() const {

	return true;
}

void CMsgLeaveParty::Swap(CMsgLeaveParty* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgLeaveParty::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgLeaveParty_descriptor_;
	metadata.reflection = CMsgLeaveParty_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgServerAvailable::CMsgServerAvailable()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgServerAvailable::InitAsDefaultInstance() {
}

CMsgServerAvailable::CMsgServerAvailable(const CMsgServerAvailable& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgServerAvailable::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgServerAvailable::~CMsgServerAvailable() {
	SharedDtor();
}

void CMsgServerAvailable::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgServerAvailable::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgServerAvailable::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgServerAvailable_descriptor_;
}

const CMsgServerAvailable& CMsgServerAvailable::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgServerAvailable* CMsgServerAvailable::default_instance_ = NULL;

CMsgServerAvailable* CMsgServerAvailable::New() const {
	return new CMsgServerAvailable;
}

void CMsgServerAvailable::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgServerAvailable::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgServerAvailable::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgServerAvailable::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgServerAvailable::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgServerAvailable::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgServerAvailable* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgServerAvailable*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgServerAvailable::MergeFrom(const CMsgServerAvailable& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgServerAvailable::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgServerAvailable::CopyFrom(const CMsgServerAvailable& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgServerAvailable::IsInitialized() const {

	return true;
}

void CMsgServerAvailable::Swap(CMsgServerAvailable* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgServerAvailable::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgServerAvailable_descriptor_;
	metadata.reflection = CMsgServerAvailable_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgLANServerAvailable::kLobbyIdFieldNumber;
#endif  // !_MSC_VER

CMsgLANServerAvailable::CMsgLANServerAvailable()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgLANServerAvailable::InitAsDefaultInstance() {
}

CMsgLANServerAvailable::CMsgLANServerAvailable(const CMsgLANServerAvailable& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgLANServerAvailable::SharedCtor() {
	_cached_size_ = 0;
	lobby_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgLANServerAvailable::~CMsgLANServerAvailable() {
	SharedDtor();
}

void CMsgLANServerAvailable::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgLANServerAvailable::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgLANServerAvailable::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgLANServerAvailable_descriptor_;
}

const CMsgLANServerAvailable& CMsgLANServerAvailable::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgLANServerAvailable* CMsgLANServerAvailable::default_instance_ = NULL;

CMsgLANServerAvailable* CMsgLANServerAvailable::New() const {
	return new CMsgLANServerAvailable;
}

void CMsgLANServerAvailable::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		lobby_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgLANServerAvailable::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 lobby_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &lobby_id_)));
				set_has_lobby_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgLANServerAvailable::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 lobby_id = 1;
	if (has_lobby_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->lobby_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgLANServerAvailable::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 lobby_id = 1;
	if (has_lobby_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->lobby_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgLANServerAvailable::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 lobby_id = 1;
		if (has_lobby_id()) {
			total_size += 1 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgLANServerAvailable::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgLANServerAvailable* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgLANServerAvailable*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgLANServerAvailable::MergeFrom(const CMsgLANServerAvailable& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_lobby_id()) {
			set_lobby_id(from.lobby_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgLANServerAvailable::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgLANServerAvailable::CopyFrom(const CMsgLANServerAvailable& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgLANServerAvailable::IsInitialized() const {

	return true;
}

void CMsgLANServerAvailable::Swap(CMsgLANServerAvailable* other) {
	if (other != this) {
		std::swap(lobby_id_, other->lobby_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgLANServerAvailable::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgLANServerAvailable_descriptor_;
	metadata.reflection = CMsgLANServerAvailable_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconGameAccountClient::kAdditionalBackpackSlotsFieldNumber;
const int CSOEconGameAccountClient::kBonusXpTimestampRefreshFieldNumber;
const int CSOEconGameAccountClient::kBonusXpUsedflagsFieldNumber;
const int CSOEconGameAccountClient::kElevatedStateFieldNumber;
const int CSOEconGameAccountClient::kElevatedTimestampFieldNumber;
#endif  // !_MSC_VER

CSOEconGameAccountClient::CSOEconGameAccountClient()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconGameAccountClient::InitAsDefaultInstance() {
}

CSOEconGameAccountClient::CSOEconGameAccountClient(const CSOEconGameAccountClient& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconGameAccountClient::SharedCtor() {
	_cached_size_ = 0;
	additional_backpack_slots_ = 0u;
	bonus_xp_timestamp_refresh_ = 0u;
	bonus_xp_usedflags_ = 0u;
	elevated_state_ = 0u;
	elevated_timestamp_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconGameAccountClient::~CSOEconGameAccountClient() {
	SharedDtor();
}

void CSOEconGameAccountClient::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconGameAccountClient::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconGameAccountClient::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconGameAccountClient_descriptor_;
}

const CSOEconGameAccountClient& CSOEconGameAccountClient::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconGameAccountClient* CSOEconGameAccountClient::default_instance_ = NULL;

CSOEconGameAccountClient* CSOEconGameAccountClient::New() const {
	return new CSOEconGameAccountClient;
}

void CSOEconGameAccountClient::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		additional_backpack_slots_ = 0u;
		bonus_xp_timestamp_refresh_ = 0u;
		bonus_xp_usedflags_ = 0u;
		elevated_state_ = 0u;
		elevated_timestamp_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconGameAccountClient::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 additional_backpack_slots = 1 [default = 0];
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &additional_backpack_slots_)));
				set_has_additional_backpack_slots();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(101)) goto parse_bonus_xp_timestamp_refresh;
			break;
		}

			  // optional fixed32 bonus_xp_timestamp_refresh = 12;
		case 12: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_bonus_xp_timestamp_refresh:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &bonus_xp_timestamp_refresh_)));
				set_has_bonus_xp_timestamp_refresh();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(104)) goto parse_bonus_xp_usedflags;
			break;
		}

			   // optional uint32 bonus_xp_usedflags = 13;
		case 13: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_bonus_xp_usedflags:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &bonus_xp_usedflags_)));
				set_has_bonus_xp_usedflags();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(112)) goto parse_elevated_state;
			break;
		}

			   // optional uint32 elevated_state = 14;
		case 14: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_elevated_state:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &elevated_state_)));
				set_has_elevated_state();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(120)) goto parse_elevated_timestamp;
			break;
		}

			   // optional uint32 elevated_timestamp = 15;
		case 15: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_elevated_timestamp:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &elevated_timestamp_)));
				set_has_elevated_timestamp();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconGameAccountClient::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 additional_backpack_slots = 1 [default = 0];
	if (has_additional_backpack_slots()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->additional_backpack_slots(), output);
	}

	// optional fixed32 bonus_xp_timestamp_refresh = 12;
	if (has_bonus_xp_timestamp_refresh()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(12, this->bonus_xp_timestamp_refresh(), output);
	}

	// optional uint32 bonus_xp_usedflags = 13;
	if (has_bonus_xp_usedflags()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->bonus_xp_usedflags(), output);
	}

	// optional uint32 elevated_state = 14;
	if (has_elevated_state()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->elevated_state(), output);
	}

	// optional uint32 elevated_timestamp = 15;
	if (has_elevated_timestamp()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->elevated_timestamp(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconGameAccountClient::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 additional_backpack_slots = 1 [default = 0];
	if (has_additional_backpack_slots()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->additional_backpack_slots(), target);
	}

	// optional fixed32 bonus_xp_timestamp_refresh = 12;
	if (has_bonus_xp_timestamp_refresh()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(12, this->bonus_xp_timestamp_refresh(), target);
	}

	// optional uint32 bonus_xp_usedflags = 13;
	if (has_bonus_xp_usedflags()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->bonus_xp_usedflags(), target);
	}

	// optional uint32 elevated_state = 14;
	if (has_elevated_state()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->elevated_state(), target);
	}

	// optional uint32 elevated_timestamp = 15;
	if (has_elevated_timestamp()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->elevated_timestamp(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconGameAccountClient::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 additional_backpack_slots = 1 [default = 0];
		if (has_additional_backpack_slots()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->additional_backpack_slots());
		}

		// optional fixed32 bonus_xp_timestamp_refresh = 12;
		if (has_bonus_xp_timestamp_refresh()) {
			total_size += 1 + 4;
		}

		// optional uint32 bonus_xp_usedflags = 13;
		if (has_bonus_xp_usedflags()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->bonus_xp_usedflags());
		}

		// optional uint32 elevated_state = 14;
		if (has_elevated_state()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->elevated_state());
		}

		// optional uint32 elevated_timestamp = 15;
		if (has_elevated_timestamp()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->elevated_timestamp());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconGameAccountClient::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconGameAccountClient* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconGameAccountClient*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconGameAccountClient::MergeFrom(const CSOEconGameAccountClient& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_additional_backpack_slots()) {
			set_additional_backpack_slots(from.additional_backpack_slots());
		}
		if (from.has_bonus_xp_timestamp_refresh()) {
			set_bonus_xp_timestamp_refresh(from.bonus_xp_timestamp_refresh());
		}
		if (from.has_bonus_xp_usedflags()) {
			set_bonus_xp_usedflags(from.bonus_xp_usedflags());
		}
		if (from.has_elevated_state()) {
			set_elevated_state(from.elevated_state());
		}
		if (from.has_elevated_timestamp()) {
			set_elevated_timestamp(from.elevated_timestamp());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconGameAccountClient::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconGameAccountClient::CopyFrom(const CSOEconGameAccountClient& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconGameAccountClient::IsInitialized() const {

	return true;
}

void CSOEconGameAccountClient::Swap(CSOEconGameAccountClient* other) {
	if (other != this) {
		std::swap(additional_backpack_slots_, other->additional_backpack_slots_);
		std::swap(bonus_xp_timestamp_refresh_, other->bonus_xp_timestamp_refresh_);
		std::swap(bonus_xp_usedflags_, other->bonus_xp_usedflags_);
		std::swap(elevated_state_, other->elevated_state_);
		std::swap(elevated_timestamp_, other->elevated_timestamp_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconGameAccountClient::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconGameAccountClient_descriptor_;
	metadata.reflection = CSOEconGameAccountClient_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOItemCriteriaCondition::kOpFieldNumber;
const int CSOItemCriteriaCondition::kFieldFieldNumber;
const int CSOItemCriteriaCondition::kRequiredFieldNumber;
const int CSOItemCriteriaCondition::kFloatValueFieldNumber;
const int CSOItemCriteriaCondition::kStringValueFieldNumber;
#endif  // !_MSC_VER

CSOItemCriteriaCondition::CSOItemCriteriaCondition()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOItemCriteriaCondition::InitAsDefaultInstance() {
}

CSOItemCriteriaCondition::CSOItemCriteriaCondition(const CSOItemCriteriaCondition& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOItemCriteriaCondition::SharedCtor() {
	_cached_size_ = 0;
	op_ = 0;
	field_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	required_ = false;
	float_value_ = 0;
	string_value_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOItemCriteriaCondition::~CSOItemCriteriaCondition() {
	SharedDtor();
}

void CSOItemCriteriaCondition::SharedDtor() {
	if (field_ != &::google::protobuf::internal::kEmptyString) {
		delete field_;
	}
	if (string_value_ != &::google::protobuf::internal::kEmptyString) {
		delete string_value_;
	}
	if (this != default_instance_) {
	}
}

void CSOItemCriteriaCondition::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOItemCriteriaCondition::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOItemCriteriaCondition_descriptor_;
}

const CSOItemCriteriaCondition& CSOItemCriteriaCondition::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOItemCriteriaCondition* CSOItemCriteriaCondition::default_instance_ = NULL;

CSOItemCriteriaCondition* CSOItemCriteriaCondition::New() const {
	return new CSOItemCriteriaCondition;
}

void CSOItemCriteriaCondition::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		op_ = 0;
		if (has_field()) {
			if (field_ != &::google::protobuf::internal::kEmptyString) {
				field_->clear();
			}
		}
		required_ = false;
		float_value_ = 0;
		if (has_string_value()) {
			if (string_value_ != &::google::protobuf::internal::kEmptyString) {
				string_value_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOItemCriteriaCondition::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional int32 op = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &op_)));
				set_has_op();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_field;
			break;
		}

			  // optional string field = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_field:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_field()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->field().data(), this->field().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_required;
			break;
		}

			  // optional bool required = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_required:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &required_)));
				set_has_required();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(37)) goto parse_float_value;
			break;
		}

			  // optional float float_value = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_float_value:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &float_value_)));
				set_has_float_value();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(42)) goto parse_string_value;
			break;
		}

			  // optional string string_value = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_string_value:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_string_value()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->string_value().data(), this->string_value().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOItemCriteriaCondition::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional int32 op = 1;
	if (has_op()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->op(), output);
	}

	// optional string field = 2;
	if (has_field()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->field().data(), this->field().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->field(), output);
	}

	// optional bool required = 3;
	if (has_required()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(3, this->required(), output);
	}

	// optional float float_value = 4;
	if (has_float_value()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->float_value(), output);
	}

	// optional string string_value = 5;
	if (has_string_value()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->string_value().data(), this->string_value().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			5, this->string_value(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOItemCriteriaCondition::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional int32 op = 1;
	if (has_op()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->op(), target);
	}

	// optional string field = 2;
	if (has_field()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->field().data(), this->field().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->field(), target);
	}

	// optional bool required = 3;
	if (has_required()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->required(), target);
	}

	// optional float float_value = 4;
	if (has_float_value()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->float_value(), target);
	}

	// optional string string_value = 5;
	if (has_string_value()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->string_value().data(), this->string_value().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				5, this->string_value(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOItemCriteriaCondition::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional int32 op = 1;
		if (has_op()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->op());
		}

		// optional string field = 2;
		if (has_field()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->field());
		}

		// optional bool required = 3;
		if (has_required()) {
			total_size += 1 + 1;
		}

		// optional float float_value = 4;
		if (has_float_value()) {
			total_size += 1 + 4;
		}

		// optional string string_value = 5;
		if (has_string_value()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->string_value());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOItemCriteriaCondition::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOItemCriteriaCondition* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOItemCriteriaCondition*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOItemCriteriaCondition::MergeFrom(const CSOItemCriteriaCondition& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_op()) {
			set_op(from.op());
		}
		if (from.has_field()) {
			set_field(from.field());
		}
		if (from.has_required()) {
			set_required(from.required());
		}
		if (from.has_float_value()) {
			set_float_value(from.float_value());
		}
		if (from.has_string_value()) {
			set_string_value(from.string_value());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOItemCriteriaCondition::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOItemCriteriaCondition::CopyFrom(const CSOItemCriteriaCondition& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOItemCriteriaCondition::IsInitialized() const {

	return true;
}

void CSOItemCriteriaCondition::Swap(CSOItemCriteriaCondition* other) {
	if (other != this) {
		std::swap(op_, other->op_);
		std::swap(field_, other->field_);
		std::swap(required_, other->required_);
		std::swap(float_value_, other->float_value_);
		std::swap(string_value_, other->string_value_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOItemCriteriaCondition::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOItemCriteriaCondition_descriptor_;
	metadata.reflection = CSOItemCriteriaCondition_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOItemCriteria::kItemLevelFieldNumber;
const int CSOItemCriteria::kItemQualityFieldNumber;
const int CSOItemCriteria::kItemLevelSetFieldNumber;
const int CSOItemCriteria::kItemQualitySetFieldNumber;
const int CSOItemCriteria::kInitialInventoryFieldNumber;
const int CSOItemCriteria::kInitialQuantityFieldNumber;
const int CSOItemCriteria::kIgnoreEnabledFlagFieldNumber;
const int CSOItemCriteria::kConditionsFieldNumber;
const int CSOItemCriteria::kItemRarityFieldNumber;
const int CSOItemCriteria::kItemRaritySetFieldNumber;
const int CSOItemCriteria::kRecentOnlyFieldNumber;
#endif  // !_MSC_VER

CSOItemCriteria::CSOItemCriteria()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOItemCriteria::InitAsDefaultInstance() {
}

CSOItemCriteria::CSOItemCriteria(const CSOItemCriteria& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOItemCriteria::SharedCtor() {
	_cached_size_ = 0;
	item_level_ = 0u;
	item_quality_ = 0;
	item_level_set_ = false;
	item_quality_set_ = false;
	initial_inventory_ = 0u;
	initial_quantity_ = 0u;
	ignore_enabled_flag_ = false;
	item_rarity_ = 0;
	item_rarity_set_ = false;
	recent_only_ = false;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOItemCriteria::~CSOItemCriteria() {
	SharedDtor();
}

void CSOItemCriteria::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOItemCriteria::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOItemCriteria::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOItemCriteria_descriptor_;
}

const CSOItemCriteria& CSOItemCriteria::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOItemCriteria* CSOItemCriteria::default_instance_ = NULL;

CSOItemCriteria* CSOItemCriteria::New() const {
	return new CSOItemCriteria;
}

void CSOItemCriteria::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_level_ = 0u;
		item_quality_ = 0;
		item_level_set_ = false;
		item_quality_set_ = false;
		initial_inventory_ = 0u;
		initial_quantity_ = 0u;
		ignore_enabled_flag_ = false;
	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		item_rarity_ = 0;
		item_rarity_set_ = false;
		recent_only_ = false;
	}
	conditions_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOItemCriteria::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 item_level = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_level_)));
				set_has_item_level();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_quality;
			break;
		}

			  // optional int32 item_quality = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_quality:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &item_quality_)));
				set_has_item_quality();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_level_set;
			break;
		}

			  // optional bool item_level_set = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_level_set:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &item_level_set_)));
				set_has_item_level_set();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_item_quality_set;
			break;
		}

			  // optional bool item_quality_set = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_quality_set:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &item_quality_set_)));
				set_has_item_quality_set();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_initial_inventory;
			break;
		}

			  // optional uint32 initial_inventory = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_initial_inventory:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &initial_inventory_)));
				set_has_initial_inventory();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(48)) goto parse_initial_quantity;
			break;
		}

			  // optional uint32 initial_quantity = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_initial_quantity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &initial_quantity_)));
				set_has_initial_quantity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(64)) goto parse_ignore_enabled_flag;
			break;
		}

			  // optional bool ignore_enabled_flag = 8;
		case 8: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_ignore_enabled_flag:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &ignore_enabled_flag_)));
				set_has_ignore_enabled_flag();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(74)) goto parse_conditions;
			break;
		}

			  // repeated .CSOItemCriteriaCondition conditions = 9;
		case 9: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_conditions:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_conditions()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(74)) goto parse_conditions;
			if (input->ExpectTag(80)) goto parse_item_rarity;
			break;
		}

			  // optional int32 item_rarity = 10;
		case 10: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_rarity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &item_rarity_)));
				set_has_item_rarity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(88)) goto parse_item_rarity_set;
			break;
		}

			   // optional bool item_rarity_set = 11;
		case 11: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_rarity_set:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &item_rarity_set_)));
				set_has_item_rarity_set();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(96)) goto parse_recent_only;
			break;
		}

			   // optional bool recent_only = 12;
		case 12: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_recent_only:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &recent_only_)));
				set_has_recent_only();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOItemCriteria::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 item_level = 1;
	if (has_item_level()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->item_level(), output);
	}

	// optional int32 item_quality = 2;
	if (has_item_quality()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->item_quality(), output);
	}

	// optional bool item_level_set = 3;
	if (has_item_level_set()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(3, this->item_level_set(), output);
	}

	// optional bool item_quality_set = 4;
	if (has_item_quality_set()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(4, this->item_quality_set(), output);
	}

	// optional uint32 initial_inventory = 5;
	if (has_initial_inventory()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->initial_inventory(), output);
	}

	// optional uint32 initial_quantity = 6;
	if (has_initial_quantity()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->initial_quantity(), output);
	}

	// optional bool ignore_enabled_flag = 8;
	if (has_ignore_enabled_flag()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(8, this->ignore_enabled_flag(), output);
	}

	// repeated .CSOItemCriteriaCondition conditions = 9;
	for (int i = 0; i < this->conditions_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			9, this->conditions(i), output);
	}

	// optional int32 item_rarity = 10;
	if (has_item_rarity()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->item_rarity(), output);
	}

	// optional bool item_rarity_set = 11;
	if (has_item_rarity_set()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(11, this->item_rarity_set(), output);
	}

	// optional bool recent_only = 12;
	if (has_recent_only()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(12, this->recent_only(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOItemCriteria::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 item_level = 1;
	if (has_item_level()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->item_level(), target);
	}

	// optional int32 item_quality = 2;
	if (has_item_quality()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->item_quality(), target);
	}

	// optional bool item_level_set = 3;
	if (has_item_level_set()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->item_level_set(), target);
	}

	// optional bool item_quality_set = 4;
	if (has_item_quality_set()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->item_quality_set(), target);
	}

	// optional uint32 initial_inventory = 5;
	if (has_initial_inventory()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->initial_inventory(), target);
	}

	// optional uint32 initial_quantity = 6;
	if (has_initial_quantity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->initial_quantity(), target);
	}

	// optional bool ignore_enabled_flag = 8;
	if (has_ignore_enabled_flag()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->ignore_enabled_flag(), target);
	}

	// repeated .CSOItemCriteriaCondition conditions = 9;
	for (int i = 0; i < this->conditions_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				9, this->conditions(i), target);
	}

	// optional int32 item_rarity = 10;
	if (has_item_rarity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->item_rarity(), target);
	}

	// optional bool item_rarity_set = 11;
	if (has_item_rarity_set()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->item_rarity_set(), target);
	}

	// optional bool recent_only = 12;
	if (has_recent_only()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->recent_only(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOItemCriteria::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 item_level = 1;
		if (has_item_level()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_level());
		}

		// optional int32 item_quality = 2;
		if (has_item_quality()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->item_quality());
		}

		// optional bool item_level_set = 3;
		if (has_item_level_set()) {
			total_size += 1 + 1;
		}

		// optional bool item_quality_set = 4;
		if (has_item_quality_set()) {
			total_size += 1 + 1;
		}

		// optional uint32 initial_inventory = 5;
		if (has_initial_inventory()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->initial_inventory());
		}

		// optional uint32 initial_quantity = 6;
		if (has_initial_quantity()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->initial_quantity());
		}

		// optional bool ignore_enabled_flag = 8;
		if (has_ignore_enabled_flag()) {
			total_size += 1 + 1;
		}

	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		// optional int32 item_rarity = 10;
		if (has_item_rarity()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->item_rarity());
		}

		// optional bool item_rarity_set = 11;
		if (has_item_rarity_set()) {
			total_size += 1 + 1;
		}

		// optional bool recent_only = 12;
		if (has_recent_only()) {
			total_size += 1 + 1;
		}

	}
	// repeated .CSOItemCriteriaCondition conditions = 9;
	total_size += 1 * this->conditions_size();
	for (int i = 0; i < this->conditions_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->conditions(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOItemCriteria::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOItemCriteria* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOItemCriteria*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOItemCriteria::MergeFrom(const CSOItemCriteria& from) {
	GOOGLE_CHECK_NE(&from, this);
	conditions_.MergeFrom(from.conditions_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_level()) {
			set_item_level(from.item_level());
		}
		if (from.has_item_quality()) {
			set_item_quality(from.item_quality());
		}
		if (from.has_item_level_set()) {
			set_item_level_set(from.item_level_set());
		}
		if (from.has_item_quality_set()) {
			set_item_quality_set(from.item_quality_set());
		}
		if (from.has_initial_inventory()) {
			set_initial_inventory(from.initial_inventory());
		}
		if (from.has_initial_quantity()) {
			set_initial_quantity(from.initial_quantity());
		}
		if (from.has_ignore_enabled_flag()) {
			set_ignore_enabled_flag(from.ignore_enabled_flag());
		}
	}
	if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		if (from.has_item_rarity()) {
			set_item_rarity(from.item_rarity());
		}
		if (from.has_item_rarity_set()) {
			set_item_rarity_set(from.item_rarity_set());
		}
		if (from.has_recent_only()) {
			set_recent_only(from.recent_only());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOItemCriteria::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOItemCriteria::CopyFrom(const CSOItemCriteria& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOItemCriteria::IsInitialized() const {

	return true;
}

void CSOItemCriteria::Swap(CSOItemCriteria* other) {
	if (other != this) {
		std::swap(item_level_, other->item_level_);
		std::swap(item_quality_, other->item_quality_);
		std::swap(item_level_set_, other->item_level_set_);
		std::swap(item_quality_set_, other->item_quality_set_);
		std::swap(initial_inventory_, other->initial_inventory_);
		std::swap(initial_quantity_, other->initial_quantity_);
		std::swap(ignore_enabled_flag_, other->ignore_enabled_flag_);
		conditions_.Swap(&other->conditions_);
		std::swap(item_rarity_, other->item_rarity_);
		std::swap(item_rarity_set_, other->item_rarity_set_);
		std::swap(recent_only_, other->recent_only_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOItemCriteria::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOItemCriteria_descriptor_;
	metadata.reflection = CSOItemCriteria_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOItemRecipe::kDefIndexFieldNumber;
const int CSOItemRecipe::kNameFieldNumber;
const int CSOItemRecipe::kNAFieldNumber;
const int CSOItemRecipe::kDescInputsFieldNumber;
const int CSOItemRecipe::kDescOutputsFieldNumber;
const int CSOItemRecipe::kDiAFieldNumber;
const int CSOItemRecipe::kDiBFieldNumber;
const int CSOItemRecipe::kDiCFieldNumber;
const int CSOItemRecipe::kDoAFieldNumber;
const int CSOItemRecipe::kDoBFieldNumber;
const int CSOItemRecipe::kDoCFieldNumber;
const int CSOItemRecipe::kRequiresAllSameClassFieldNumber;
const int CSOItemRecipe::kRequiresAllSameSlotFieldNumber;
const int CSOItemRecipe::kClassUsageForOutputFieldNumber;
const int CSOItemRecipe::kSlotUsageForOutputFieldNumber;
const int CSOItemRecipe::kSetForOutputFieldNumber;
const int CSOItemRecipe::kInputItemsCriteriaFieldNumber;
const int CSOItemRecipe::kOutputItemsCriteriaFieldNumber;
const int CSOItemRecipe::kInputItemDupeCountsFieldNumber;
#endif  // !_MSC_VER

CSOItemRecipe::CSOItemRecipe()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOItemRecipe::InitAsDefaultInstance() {
}

CSOItemRecipe::CSOItemRecipe(const CSOItemRecipe& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOItemRecipe::SharedCtor() {
	_cached_size_ = 0;
	def_index_ = 0u;
	name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	n_a_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	desc_inputs_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	desc_outputs_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	di_a_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	di_b_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	di_c_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	do_a_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	do_b_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	do_c_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	requires_all_same_class_ = false;
	requires_all_same_slot_ = false;
	class_usage_for_output_ = 0;
	slot_usage_for_output_ = 0;
	set_for_output_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOItemRecipe::~CSOItemRecipe() {
	SharedDtor();
}

void CSOItemRecipe::SharedDtor() {
	if (name_ != &::google::protobuf::internal::kEmptyString) {
		delete name_;
	}
	if (n_a_ != &::google::protobuf::internal::kEmptyString) {
		delete n_a_;
	}
	if (desc_inputs_ != &::google::protobuf::internal::kEmptyString) {
		delete desc_inputs_;
	}
	if (desc_outputs_ != &::google::protobuf::internal::kEmptyString) {
		delete desc_outputs_;
	}
	if (di_a_ != &::google::protobuf::internal::kEmptyString) {
		delete di_a_;
	}
	if (di_b_ != &::google::protobuf::internal::kEmptyString) {
		delete di_b_;
	}
	if (di_c_ != &::google::protobuf::internal::kEmptyString) {
		delete di_c_;
	}
	if (do_a_ != &::google::protobuf::internal::kEmptyString) {
		delete do_a_;
	}
	if (do_b_ != &::google::protobuf::internal::kEmptyString) {
		delete do_b_;
	}
	if (do_c_ != &::google::protobuf::internal::kEmptyString) {
		delete do_c_;
	}
	if (this != default_instance_) {
	}
}

void CSOItemRecipe::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOItemRecipe::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOItemRecipe_descriptor_;
}

const CSOItemRecipe& CSOItemRecipe::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOItemRecipe* CSOItemRecipe::default_instance_ = NULL;

CSOItemRecipe* CSOItemRecipe::New() const {
	return new CSOItemRecipe;
}

void CSOItemRecipe::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		def_index_ = 0u;
		if (has_name()) {
			if (name_ != &::google::protobuf::internal::kEmptyString) {
				name_->clear();
			}
		}
		if (has_n_a()) {
			if (n_a_ != &::google::protobuf::internal::kEmptyString) {
				n_a_->clear();
			}
		}
		if (has_desc_inputs()) {
			if (desc_inputs_ != &::google::protobuf::internal::kEmptyString) {
				desc_inputs_->clear();
			}
		}
		if (has_desc_outputs()) {
			if (desc_outputs_ != &::google::protobuf::internal::kEmptyString) {
				desc_outputs_->clear();
			}
		}
		if (has_di_a()) {
			if (di_a_ != &::google::protobuf::internal::kEmptyString) {
				di_a_->clear();
			}
		}
		if (has_di_b()) {
			if (di_b_ != &::google::protobuf::internal::kEmptyString) {
				di_b_->clear();
			}
		}
		if (has_di_c()) {
			if (di_c_ != &::google::protobuf::internal::kEmptyString) {
				di_c_->clear();
			}
		}
	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		if (has_do_a()) {
			if (do_a_ != &::google::protobuf::internal::kEmptyString) {
				do_a_->clear();
			}
		}
		if (has_do_b()) {
			if (do_b_ != &::google::protobuf::internal::kEmptyString) {
				do_b_->clear();
			}
		}
		if (has_do_c()) {
			if (do_c_ != &::google::protobuf::internal::kEmptyString) {
				do_c_->clear();
			}
		}
		requires_all_same_class_ = false;
		requires_all_same_slot_ = false;
		class_usage_for_output_ = 0;
		slot_usage_for_output_ = 0;
		set_for_output_ = 0;
	}
	input_items_criteria_.Clear();
	output_items_criteria_.Clear();
	input_item_dupe_counts_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOItemRecipe::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 def_index = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &def_index_)));
				set_has_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_name;
			break;
		}

			  // optional string name = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_name:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->name().data(), this->name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_n_a;
			break;
		}

			  // optional string n_a = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_n_a:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_n_a()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->n_a().data(), this->n_a().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_desc_inputs;
			break;
		}

			  // optional string desc_inputs = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_desc_inputs:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_desc_inputs()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->desc_inputs().data(), this->desc_inputs().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(42)) goto parse_desc_outputs;
			break;
		}

			  // optional string desc_outputs = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_desc_outputs:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_desc_outputs()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->desc_outputs().data(), this->desc_outputs().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(50)) goto parse_di_a;
			break;
		}

			  // optional string di_a = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_di_a:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_di_a()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->di_a().data(), this->di_a().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(58)) goto parse_di_b;
			break;
		}

			  // optional string di_b = 7;
		case 7: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_di_b:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_di_b()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->di_b().data(), this->di_b().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(66)) goto parse_di_c;
			break;
		}

			  // optional string di_c = 8;
		case 8: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_di_c:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_di_c()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->di_c().data(), this->di_c().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(74)) goto parse_do_a;
			break;
		}

			  // optional string do_a = 9;
		case 9: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_do_a:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_do_a()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->do_a().data(), this->do_a().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(82)) goto parse_do_b;
			break;
		}

			  // optional string do_b = 10;
		case 10: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_do_b:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_do_b()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->do_b().data(), this->do_b().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(90)) goto parse_do_c;
			break;
		}

			   // optional string do_c = 11;
		case 11: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_do_c:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_do_c()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->do_c().data(), this->do_c().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(96)) goto parse_requires_all_same_class;
			break;
		}

			   // optional bool requires_all_same_class = 12;
		case 12: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_requires_all_same_class:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &requires_all_same_class_)));
				set_has_requires_all_same_class();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(104)) goto parse_requires_all_same_slot;
			break;
		}

			   // optional bool requires_all_same_slot = 13;
		case 13: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_requires_all_same_slot:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &requires_all_same_slot_)));
				set_has_requires_all_same_slot();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(112)) goto parse_class_usage_for_output;
			break;
		}

			   // optional int32 class_usage_for_output = 14;
		case 14: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_class_usage_for_output:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &class_usage_for_output_)));
				set_has_class_usage_for_output();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(120)) goto parse_slot_usage_for_output;
			break;
		}

			   // optional int32 slot_usage_for_output = 15;
		case 15: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_slot_usage_for_output:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &slot_usage_for_output_)));
				set_has_slot_usage_for_output();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(128)) goto parse_set_for_output;
			break;
		}

			   // optional int32 set_for_output = 16;
		case 16: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_set_for_output:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &set_for_output_)));
				set_has_set_for_output();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(162)) goto parse_input_items_criteria;
			break;
		}

			   // repeated .CSOItemCriteria input_items_criteria = 20;
		case 20: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_input_items_criteria:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_input_items_criteria()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(162)) goto parse_input_items_criteria;
			if (input->ExpectTag(170)) goto parse_output_items_criteria;
			break;
		}

			   // repeated .CSOItemCriteria output_items_criteria = 21;
		case 21: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_output_items_criteria:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_output_items_criteria()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(170)) goto parse_output_items_criteria;
			if (input->ExpectTag(176)) goto parse_input_item_dupe_counts;
			break;
		}

			   // repeated uint32 input_item_dupe_counts = 22;
		case 22: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_input_item_dupe_counts:
				DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						2, 176, input, this->mutable_input_item_dupe_counts())));
			}
			else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
				== ::google::protobuf::internal::WireFormatLite::
				WIRETYPE_LENGTH_DELIMITED) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, this->mutable_input_item_dupe_counts())));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(176)) goto parse_input_item_dupe_counts;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOItemRecipe::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 def_index = 1;
	if (has_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->def_index(), output);
	}

	// optional string name = 2;
	if (has_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->name().data(), this->name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->name(), output);
	}

	// optional string n_a = 3;
	if (has_n_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->n_a().data(), this->n_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->n_a(), output);
	}

	// optional string desc_inputs = 4;
	if (has_desc_inputs()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->desc_inputs().data(), this->desc_inputs().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->desc_inputs(), output);
	}

	// optional string desc_outputs = 5;
	if (has_desc_outputs()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->desc_outputs().data(), this->desc_outputs().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			5, this->desc_outputs(), output);
	}

	// optional string di_a = 6;
	if (has_di_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_a().data(), this->di_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			6, this->di_a(), output);
	}

	// optional string di_b = 7;
	if (has_di_b()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_b().data(), this->di_b().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			7, this->di_b(), output);
	}

	// optional string di_c = 8;
	if (has_di_c()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_c().data(), this->di_c().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			8, this->di_c(), output);
	}

	// optional string do_a = 9;
	if (has_do_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_a().data(), this->do_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			9, this->do_a(), output);
	}

	// optional string do_b = 10;
	if (has_do_b()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_b().data(), this->do_b().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			10, this->do_b(), output);
	}

	// optional string do_c = 11;
	if (has_do_c()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_c().data(), this->do_c().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			11, this->do_c(), output);
	}

	// optional bool requires_all_same_class = 12;
	if (has_requires_all_same_class()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(12, this->requires_all_same_class(), output);
	}

	// optional bool requires_all_same_slot = 13;
	if (has_requires_all_same_slot()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(13, this->requires_all_same_slot(), output);
	}

	// optional int32 class_usage_for_output = 14;
	if (has_class_usage_for_output()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->class_usage_for_output(), output);
	}

	// optional int32 slot_usage_for_output = 15;
	if (has_slot_usage_for_output()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->slot_usage_for_output(), output);
	}

	// optional int32 set_for_output = 16;
	if (has_set_for_output()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(16, this->set_for_output(), output);
	}

	// repeated .CSOItemCriteria input_items_criteria = 20;
	for (int i = 0; i < this->input_items_criteria_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			20, this->input_items_criteria(i), output);
	}

	// repeated .CSOItemCriteria output_items_criteria = 21;
	for (int i = 0; i < this->output_items_criteria_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			21, this->output_items_criteria(i), output);
	}

	// repeated uint32 input_item_dupe_counts = 22;
	for (int i = 0; i < this->input_item_dupe_counts_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(
			22, this->input_item_dupe_counts(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOItemRecipe::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 def_index = 1;
	if (has_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->def_index(), target);
	}

	// optional string name = 2;
	if (has_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->name().data(), this->name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->name(), target);
	}

	// optional string n_a = 3;
	if (has_n_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->n_a().data(), this->n_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->n_a(), target);
	}

	// optional string desc_inputs = 4;
	if (has_desc_inputs()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->desc_inputs().data(), this->desc_inputs().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				4, this->desc_inputs(), target);
	}

	// optional string desc_outputs = 5;
	if (has_desc_outputs()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->desc_outputs().data(), this->desc_outputs().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				5, this->desc_outputs(), target);
	}

	// optional string di_a = 6;
	if (has_di_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_a().data(), this->di_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				6, this->di_a(), target);
	}

	// optional string di_b = 7;
	if (has_di_b()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_b().data(), this->di_b().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				7, this->di_b(), target);
	}

	// optional string di_c = 8;
	if (has_di_c()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->di_c().data(), this->di_c().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				8, this->di_c(), target);
	}

	// optional string do_a = 9;
	if (has_do_a()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_a().data(), this->do_a().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				9, this->do_a(), target);
	}

	// optional string do_b = 10;
	if (has_do_b()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_b().data(), this->do_b().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				10, this->do_b(), target);
	}

	// optional string do_c = 11;
	if (has_do_c()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->do_c().data(), this->do_c().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				11, this->do_c(), target);
	}

	// optional bool requires_all_same_class = 12;
	if (has_requires_all_same_class()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->requires_all_same_class(), target);
	}

	// optional bool requires_all_same_slot = 13;
	if (has_requires_all_same_slot()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->requires_all_same_slot(), target);
	}

	// optional int32 class_usage_for_output = 14;
	if (has_class_usage_for_output()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->class_usage_for_output(), target);
	}

	// optional int32 slot_usage_for_output = 15;
	if (has_slot_usage_for_output()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->slot_usage_for_output(), target);
	}

	// optional int32 set_for_output = 16;
	if (has_set_for_output()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(16, this->set_for_output(), target);
	}

	// repeated .CSOItemCriteria input_items_criteria = 20;
	for (int i = 0; i < this->input_items_criteria_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				20, this->input_items_criteria(i), target);
	}

	// repeated .CSOItemCriteria output_items_criteria = 21;
	for (int i = 0; i < this->output_items_criteria_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				21, this->output_items_criteria(i), target);
	}

	// repeated uint32 input_item_dupe_counts = 22;
	for (int i = 0; i < this->input_item_dupe_counts_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteUInt32ToArray(22, this->input_item_dupe_counts(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOItemRecipe::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 def_index = 1;
		if (has_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->def_index());
		}

		// optional string name = 2;
		if (has_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->name());
		}

		// optional string n_a = 3;
		if (has_n_a()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->n_a());
		}

		// optional string desc_inputs = 4;
		if (has_desc_inputs()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->desc_inputs());
		}

		// optional string desc_outputs = 5;
		if (has_desc_outputs()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->desc_outputs());
		}

		// optional string di_a = 6;
		if (has_di_a()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->di_a());
		}

		// optional string di_b = 7;
		if (has_di_b()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->di_b());
		}

		// optional string di_c = 8;
		if (has_di_c()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->di_c());
		}

	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		// optional string do_a = 9;
		if (has_do_a()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->do_a());
		}

		// optional string do_b = 10;
		if (has_do_b()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->do_b());
		}

		// optional string do_c = 11;
		if (has_do_c()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->do_c());
		}

		// optional bool requires_all_same_class = 12;
		if (has_requires_all_same_class()) {
			total_size += 1 + 1;
		}

		// optional bool requires_all_same_slot = 13;
		if (has_requires_all_same_slot()) {
			total_size += 1 + 1;
		}

		// optional int32 class_usage_for_output = 14;
		if (has_class_usage_for_output()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->class_usage_for_output());
		}

		// optional int32 slot_usage_for_output = 15;
		if (has_slot_usage_for_output()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->slot_usage_for_output());
		}

		// optional int32 set_for_output = 16;
		if (has_set_for_output()) {
			total_size += 2 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->set_for_output());
		}

	}
	// repeated .CSOItemCriteria input_items_criteria = 20;
	total_size += 2 * this->input_items_criteria_size();
	for (int i = 0; i < this->input_items_criteria_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->input_items_criteria(i));
	}

	// repeated .CSOItemCriteria output_items_criteria = 21;
	total_size += 2 * this->output_items_criteria_size();
	for (int i = 0; i < this->output_items_criteria_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->output_items_criteria(i));
	}

	// repeated uint32 input_item_dupe_counts = 22;
	{
		int data_size = 0;
		for (int i = 0; i < this->input_item_dupe_counts_size(); i++) {
			data_size += ::google::protobuf::internal::WireFormatLite::
				UInt32Size(this->input_item_dupe_counts(i));
		}
		total_size += 2 * this->input_item_dupe_counts_size() + data_size;
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOItemRecipe::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOItemRecipe* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOItemRecipe*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOItemRecipe::MergeFrom(const CSOItemRecipe& from) {
	GOOGLE_CHECK_NE(&from, this);
	input_items_criteria_.MergeFrom(from.input_items_criteria_);
	output_items_criteria_.MergeFrom(from.output_items_criteria_);
	input_item_dupe_counts_.MergeFrom(from.input_item_dupe_counts_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_def_index()) {
			set_def_index(from.def_index());
		}
		if (from.has_name()) {
			set_name(from.name());
		}
		if (from.has_n_a()) {
			set_n_a(from.n_a());
		}
		if (from.has_desc_inputs()) {
			set_desc_inputs(from.desc_inputs());
		}
		if (from.has_desc_outputs()) {
			set_desc_outputs(from.desc_outputs());
		}
		if (from.has_di_a()) {
			set_di_a(from.di_a());
		}
		if (from.has_di_b()) {
			set_di_b(from.di_b());
		}
		if (from.has_di_c()) {
			set_di_c(from.di_c());
		}
	}
	if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		if (from.has_do_a()) {
			set_do_a(from.do_a());
		}
		if (from.has_do_b()) {
			set_do_b(from.do_b());
		}
		if (from.has_do_c()) {
			set_do_c(from.do_c());
		}
		if (from.has_requires_all_same_class()) {
			set_requires_all_same_class(from.requires_all_same_class());
		}
		if (from.has_requires_all_same_slot()) {
			set_requires_all_same_slot(from.requires_all_same_slot());
		}
		if (from.has_class_usage_for_output()) {
			set_class_usage_for_output(from.class_usage_for_output());
		}
		if (from.has_slot_usage_for_output()) {
			set_slot_usage_for_output(from.slot_usage_for_output());
		}
		if (from.has_set_for_output()) {
			set_set_for_output(from.set_for_output());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOItemRecipe::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOItemRecipe::CopyFrom(const CSOItemRecipe& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOItemRecipe::IsInitialized() const {

	return true;
}

void CSOItemRecipe::Swap(CSOItemRecipe* other) {
	if (other != this) {
		std::swap(def_index_, other->def_index_);
		std::swap(name_, other->name_);
		std::swap(n_a_, other->n_a_);
		std::swap(desc_inputs_, other->desc_inputs_);
		std::swap(desc_outputs_, other->desc_outputs_);
		std::swap(di_a_, other->di_a_);
		std::swap(di_b_, other->di_b_);
		std::swap(di_c_, other->di_c_);
		std::swap(do_a_, other->do_a_);
		std::swap(do_b_, other->do_b_);
		std::swap(do_c_, other->do_c_);
		std::swap(requires_all_same_class_, other->requires_all_same_class_);
		std::swap(requires_all_same_slot_, other->requires_all_same_slot_);
		std::swap(class_usage_for_output_, other->class_usage_for_output_);
		std::swap(slot_usage_for_output_, other->slot_usage_for_output_);
		std::swap(set_for_output_, other->set_for_output_);
		input_items_criteria_.Swap(&other->input_items_criteria_);
		output_items_criteria_.Swap(&other->output_items_criteria_);
		input_item_dupe_counts_.Swap(&other->input_item_dupe_counts_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOItemRecipe::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOItemRecipe_descriptor_;
	metadata.reflection = CSOItemRecipe_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgDevNewItemRequest::kReceiverFieldNumber;
const int CMsgDevNewItemRequest::kCriteriaFieldNumber;
#endif  // !_MSC_VER

CMsgDevNewItemRequest::CMsgDevNewItemRequest()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgDevNewItemRequest::InitAsDefaultInstance() {
	criteria_ = const_cast<::CSOItemCriteria*>(&::CSOItemCriteria::default_instance());
}

CMsgDevNewItemRequest::CMsgDevNewItemRequest(const CMsgDevNewItemRequest& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgDevNewItemRequest::SharedCtor() {
	_cached_size_ = 0;
	receiver_ = GOOGLE_ULONGLONG(0);
	criteria_ = NULL;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgDevNewItemRequest::~CMsgDevNewItemRequest() {
	SharedDtor();
}

void CMsgDevNewItemRequest::SharedDtor() {
	if (this != default_instance_) {
		delete criteria_;
	}
}

void CMsgDevNewItemRequest::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgDevNewItemRequest::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgDevNewItemRequest_descriptor_;
}

const CMsgDevNewItemRequest& CMsgDevNewItemRequest::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgDevNewItemRequest* CMsgDevNewItemRequest::default_instance_ = NULL;

CMsgDevNewItemRequest* CMsgDevNewItemRequest::New() const {
	return new CMsgDevNewItemRequest;
}

void CMsgDevNewItemRequest::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		receiver_ = GOOGLE_ULONGLONG(0);
		if (has_criteria()) {
			if (criteria_ != NULL) criteria_->::CSOItemCriteria::Clear();
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgDevNewItemRequest::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 receiver = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &receiver_)));
				set_has_receiver();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_criteria;
			break;
		}

			  // optional .CSOItemCriteria criteria = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_criteria:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, mutable_criteria()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgDevNewItemRequest::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 receiver = 1;
	if (has_receiver()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->receiver(), output);
	}

	// optional .CSOItemCriteria criteria = 2;
	if (has_criteria()) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			2, this->criteria(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgDevNewItemRequest::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 receiver = 1;
	if (has_receiver()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->receiver(), target);
	}

	// optional .CSOItemCriteria criteria = 2;
	if (has_criteria()) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				2, this->criteria(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgDevNewItemRequest::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 receiver = 1;
		if (has_receiver()) {
			total_size += 1 + 8;
		}

		// optional .CSOItemCriteria criteria = 2;
		if (has_criteria()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
					this->criteria());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgDevNewItemRequest::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgDevNewItemRequest* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgDevNewItemRequest*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgDevNewItemRequest::MergeFrom(const CMsgDevNewItemRequest& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_receiver()) {
			set_receiver(from.receiver());
		}
		if (from.has_criteria()) {
			mutable_criteria()->::CSOItemCriteria::MergeFrom(from.criteria());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgDevNewItemRequest::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgDevNewItemRequest::CopyFrom(const CMsgDevNewItemRequest& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgDevNewItemRequest::IsInitialized() const {

	return true;
}

void CMsgDevNewItemRequest::Swap(CMsgDevNewItemRequest* other) {
	if (other != this) {
		std::swap(receiver_, other->receiver_);
		std::swap(criteria_, other->criteria_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgDevNewItemRequest::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgDevNewItemRequest_descriptor_;
	metadata.reflection = CMsgDevNewItemRequest_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgIncrementKillCountAttribute::kKillerAccountIdFieldNumber;
const int CMsgIncrementKillCountAttribute::kVictimAccountIdFieldNumber;
const int CMsgIncrementKillCountAttribute::kItemIdFieldNumber;
const int CMsgIncrementKillCountAttribute::kEventTypeFieldNumber;
const int CMsgIncrementKillCountAttribute::kAmountFieldNumber;
#endif  // !_MSC_VER

CMsgIncrementKillCountAttribute::CMsgIncrementKillCountAttribute()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgIncrementKillCountAttribute::InitAsDefaultInstance() {
}

CMsgIncrementKillCountAttribute::CMsgIncrementKillCountAttribute(const CMsgIncrementKillCountAttribute& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgIncrementKillCountAttribute::SharedCtor() {
	_cached_size_ = 0;
	killer_account_id_ = 0u;
	victim_account_id_ = 0u;
	item_id_ = GOOGLE_ULONGLONG(0);
	event_type_ = 0u;
	amount_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgIncrementKillCountAttribute::~CMsgIncrementKillCountAttribute() {
	SharedDtor();
}

void CMsgIncrementKillCountAttribute::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgIncrementKillCountAttribute::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgIncrementKillCountAttribute::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgIncrementKillCountAttribute_descriptor_;
}

const CMsgIncrementKillCountAttribute& CMsgIncrementKillCountAttribute::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgIncrementKillCountAttribute* CMsgIncrementKillCountAttribute::default_instance_ = NULL;

CMsgIncrementKillCountAttribute* CMsgIncrementKillCountAttribute::New() const {
	return new CMsgIncrementKillCountAttribute;
}

void CMsgIncrementKillCountAttribute::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		killer_account_id_ = 0u;
		victim_account_id_ = 0u;
		item_id_ = GOOGLE_ULONGLONG(0);
		event_type_ = 0u;
		amount_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgIncrementKillCountAttribute::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed32 killer_account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &killer_account_id_)));
				set_has_killer_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(21)) goto parse_victim_account_id;
			break;
		}

			  // optional fixed32 victim_account_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_victim_account_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &victim_account_id_)));
				set_has_victim_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_id;
			break;
		}

			  // optional uint64 item_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_event_type;
			break;
		}

			  // optional uint32 event_type = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_event_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &event_type_)));
				set_has_event_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_amount;
			break;
		}

			  // optional uint32 amount = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_amount:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &amount_)));
				set_has_amount();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgIncrementKillCountAttribute::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed32 killer_account_id = 1;
	if (has_killer_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->killer_account_id(), output);
	}

	// optional fixed32 victim_account_id = 2;
	if (has_victim_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->victim_account_id(), output);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->item_id(), output);
	}

	// optional uint32 event_type = 4;
	if (has_event_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->event_type(), output);
	}

	// optional uint32 amount = 5;
	if (has_amount()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->amount(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgIncrementKillCountAttribute::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed32 killer_account_id = 1;
	if (has_killer_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->killer_account_id(), target);
	}

	// optional fixed32 victim_account_id = 2;
	if (has_victim_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->victim_account_id(), target);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->item_id(), target);
	}

	// optional uint32 event_type = 4;
	if (has_event_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->event_type(), target);
	}

	// optional uint32 amount = 5;
	if (has_amount()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->amount(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgIncrementKillCountAttribute::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed32 killer_account_id = 1;
		if (has_killer_account_id()) {
			total_size += 1 + 4;
		}

		// optional fixed32 victim_account_id = 2;
		if (has_victim_account_id()) {
			total_size += 1 + 4;
		}

		// optional uint64 item_id = 3;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

		// optional uint32 event_type = 4;
		if (has_event_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->event_type());
		}

		// optional uint32 amount = 5;
		if (has_amount()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->amount());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgIncrementKillCountAttribute::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgIncrementKillCountAttribute* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgIncrementKillCountAttribute*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgIncrementKillCountAttribute::MergeFrom(const CMsgIncrementKillCountAttribute& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_killer_account_id()) {
			set_killer_account_id(from.killer_account_id());
		}
		if (from.has_victim_account_id()) {
			set_victim_account_id(from.victim_account_id());
		}
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
		if (from.has_event_type()) {
			set_event_type(from.event_type());
		}
		if (from.has_amount()) {
			set_amount(from.amount());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgIncrementKillCountAttribute::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgIncrementKillCountAttribute::CopyFrom(const CMsgIncrementKillCountAttribute& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgIncrementKillCountAttribute::IsInitialized() const {

	return true;
}

void CMsgIncrementKillCountAttribute::Swap(CMsgIncrementKillCountAttribute* other) {
	if (other != this) {
		std::swap(killer_account_id_, other->killer_account_id_);
		std::swap(victim_account_id_, other->victim_account_id_);
		std::swap(item_id_, other->item_id_);
		std::swap(event_type_, other->event_type_);
		std::swap(amount_, other->amount_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgIncrementKillCountAttribute::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgIncrementKillCountAttribute_descriptor_;
	metadata.reflection = CMsgIncrementKillCountAttribute_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgApplySticker::kStickerItemIdFieldNumber;
const int CMsgApplySticker::kItemItemIdFieldNumber;
const int CMsgApplySticker::kStickerSlotFieldNumber;
const int CMsgApplySticker::kBaseitemDefidxFieldNumber;
const int CMsgApplySticker::kStickerWearFieldNumber;
#endif  // !_MSC_VER

CMsgApplySticker::CMsgApplySticker()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgApplySticker::InitAsDefaultInstance() {
}

CMsgApplySticker::CMsgApplySticker(const CMsgApplySticker& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgApplySticker::SharedCtor() {
	_cached_size_ = 0;
	sticker_item_id_ = GOOGLE_ULONGLONG(0);
	item_item_id_ = GOOGLE_ULONGLONG(0);
	sticker_slot_ = 0u;
	baseitem_defidx_ = 0u;
	sticker_wear_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgApplySticker::~CMsgApplySticker() {
	SharedDtor();
}

void CMsgApplySticker::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgApplySticker::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgApplySticker::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgApplySticker_descriptor_;
}

const CMsgApplySticker& CMsgApplySticker::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgApplySticker* CMsgApplySticker::default_instance_ = NULL;

CMsgApplySticker* CMsgApplySticker::New() const {
	return new CMsgApplySticker;
}

void CMsgApplySticker::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		sticker_item_id_ = GOOGLE_ULONGLONG(0);
		item_item_id_ = GOOGLE_ULONGLONG(0);
		sticker_slot_ = 0u;
		baseitem_defidx_ = 0u;
		sticker_wear_ = 0;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgApplySticker::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 sticker_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &sticker_item_id_)));
				set_has_sticker_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_item_id;
			break;
		}

			  // optional uint64 item_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_item_id_)));
				set_has_item_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_sticker_slot;
			break;
		}

			  // optional uint32 sticker_slot = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_sticker_slot:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &sticker_slot_)));
				set_has_sticker_slot();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_baseitem_defidx;
			break;
		}

			  // optional uint32 baseitem_defidx = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_baseitem_defidx:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &baseitem_defidx_)));
				set_has_baseitem_defidx();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(45)) goto parse_sticker_wear;
			break;
		}

			  // optional float sticker_wear = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_sticker_wear:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &sticker_wear_)));
				set_has_sticker_wear();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgApplySticker::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 sticker_item_id = 1;
	if (has_sticker_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->sticker_item_id(), output);
	}

	// optional uint64 item_item_id = 2;
	if (has_item_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->item_item_id(), output);
	}

	// optional uint32 sticker_slot = 3;
	if (has_sticker_slot()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->sticker_slot(), output);
	}

	// optional uint32 baseitem_defidx = 4;
	if (has_baseitem_defidx()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->baseitem_defidx(), output);
	}

	// optional float sticker_wear = 5;
	if (has_sticker_wear()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->sticker_wear(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgApplySticker::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 sticker_item_id = 1;
	if (has_sticker_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->sticker_item_id(), target);
	}

	// optional uint64 item_item_id = 2;
	if (has_item_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->item_item_id(), target);
	}

	// optional uint32 sticker_slot = 3;
	if (has_sticker_slot()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->sticker_slot(), target);
	}

	// optional uint32 baseitem_defidx = 4;
	if (has_baseitem_defidx()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->baseitem_defidx(), target);
	}

	// optional float sticker_wear = 5;
	if (has_sticker_wear()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->sticker_wear(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgApplySticker::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 sticker_item_id = 1;
		if (has_sticker_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->sticker_item_id());
		}

		// optional uint64 item_item_id = 2;
		if (has_item_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_item_id());
		}

		// optional uint32 sticker_slot = 3;
		if (has_sticker_slot()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->sticker_slot());
		}

		// optional uint32 baseitem_defidx = 4;
		if (has_baseitem_defidx()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->baseitem_defidx());
		}

		// optional float sticker_wear = 5;
		if (has_sticker_wear()) {
			total_size += 1 + 4;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgApplySticker::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgApplySticker* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgApplySticker*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgApplySticker::MergeFrom(const CMsgApplySticker& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_sticker_item_id()) {
			set_sticker_item_id(from.sticker_item_id());
		}
		if (from.has_item_item_id()) {
			set_item_item_id(from.item_item_id());
		}
		if (from.has_sticker_slot()) {
			set_sticker_slot(from.sticker_slot());
		}
		if (from.has_baseitem_defidx()) {
			set_baseitem_defidx(from.baseitem_defidx());
		}
		if (from.has_sticker_wear()) {
			set_sticker_wear(from.sticker_wear());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgApplySticker::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgApplySticker::CopyFrom(const CMsgApplySticker& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgApplySticker::IsInitialized() const {

	return true;
}

void CMsgApplySticker::Swap(CMsgApplySticker* other) {
	if (other != this) {
		std::swap(sticker_item_id_, other->sticker_item_id_);
		std::swap(item_item_id_, other->item_item_id_);
		std::swap(sticker_slot_, other->sticker_slot_);
		std::swap(baseitem_defidx_, other->baseitem_defidx_);
		std::swap(sticker_wear_, other->sticker_wear_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgApplySticker::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgApplySticker_descriptor_;
	metadata.reflection = CMsgApplySticker_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgApplyStatTrakSwap::kToolItemIdFieldNumber;
const int CMsgApplyStatTrakSwap::kItem1ItemIdFieldNumber;
const int CMsgApplyStatTrakSwap::kItem2ItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgApplyStatTrakSwap::CMsgApplyStatTrakSwap()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgApplyStatTrakSwap::InitAsDefaultInstance() {
}

CMsgApplyStatTrakSwap::CMsgApplyStatTrakSwap(const CMsgApplyStatTrakSwap& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgApplyStatTrakSwap::SharedCtor() {
	_cached_size_ = 0;
	tool_item_id_ = GOOGLE_ULONGLONG(0);
	item_1_item_id_ = GOOGLE_ULONGLONG(0);
	item_2_item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgApplyStatTrakSwap::~CMsgApplyStatTrakSwap() {
	SharedDtor();
}

void CMsgApplyStatTrakSwap::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgApplyStatTrakSwap::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgApplyStatTrakSwap::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgApplyStatTrakSwap_descriptor_;
}

const CMsgApplyStatTrakSwap& CMsgApplyStatTrakSwap::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgApplyStatTrakSwap* CMsgApplyStatTrakSwap::default_instance_ = NULL;

CMsgApplyStatTrakSwap* CMsgApplyStatTrakSwap::New() const {
	return new CMsgApplyStatTrakSwap;
}

void CMsgApplyStatTrakSwap::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		tool_item_id_ = GOOGLE_ULONGLONG(0);
		item_1_item_id_ = GOOGLE_ULONGLONG(0);
		item_2_item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgApplyStatTrakSwap::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 tool_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &tool_item_id_)));
				set_has_tool_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_1_item_id;
			break;
		}

			  // optional uint64 item_1_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_1_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_1_item_id_)));
				set_has_item_1_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_2_item_id;
			break;
		}

			  // optional uint64 item_2_item_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_2_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_2_item_id_)));
				set_has_item_2_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgApplyStatTrakSwap::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 tool_item_id = 1;
	if (has_tool_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->tool_item_id(), output);
	}

	// optional uint64 item_1_item_id = 2;
	if (has_item_1_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->item_1_item_id(), output);
	}

	// optional uint64 item_2_item_id = 3;
	if (has_item_2_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->item_2_item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgApplyStatTrakSwap::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 tool_item_id = 1;
	if (has_tool_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->tool_item_id(), target);
	}

	// optional uint64 item_1_item_id = 2;
	if (has_item_1_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->item_1_item_id(), target);
	}

	// optional uint64 item_2_item_id = 3;
	if (has_item_2_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->item_2_item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgApplyStatTrakSwap::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 tool_item_id = 1;
		if (has_tool_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->tool_item_id());
		}

		// optional uint64 item_1_item_id = 2;
		if (has_item_1_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_1_item_id());
		}

		// optional uint64 item_2_item_id = 3;
		if (has_item_2_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_2_item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgApplyStatTrakSwap::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgApplyStatTrakSwap* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgApplyStatTrakSwap*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgApplyStatTrakSwap::MergeFrom(const CMsgApplyStatTrakSwap& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_tool_item_id()) {
			set_tool_item_id(from.tool_item_id());
		}
		if (from.has_item_1_item_id()) {
			set_item_1_item_id(from.item_1_item_id());
		}
		if (from.has_item_2_item_id()) {
			set_item_2_item_id(from.item_2_item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgApplyStatTrakSwap::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgApplyStatTrakSwap::CopyFrom(const CMsgApplyStatTrakSwap& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgApplyStatTrakSwap::IsInitialized() const {

	return true;
}

void CMsgApplyStatTrakSwap::Swap(CMsgApplyStatTrakSwap* other) {
	if (other != this) {
		std::swap(tool_item_id_, other->tool_item_id_);
		std::swap(item_1_item_id_, other->item_1_item_id_);
		std::swap(item_2_item_id_, other->item_2_item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgApplyStatTrakSwap::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgApplyStatTrakSwap_descriptor_;
	metadata.reflection = CMsgApplyStatTrakSwap_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgApplyStrangePart::kStrangePartItemIdFieldNumber;
const int CMsgApplyStrangePart::kItemItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgApplyStrangePart::CMsgApplyStrangePart()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgApplyStrangePart::InitAsDefaultInstance() {
}

CMsgApplyStrangePart::CMsgApplyStrangePart(const CMsgApplyStrangePart& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgApplyStrangePart::SharedCtor() {
	_cached_size_ = 0;
	strange_part_item_id_ = GOOGLE_ULONGLONG(0);
	item_item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgApplyStrangePart::~CMsgApplyStrangePart() {
	SharedDtor();
}

void CMsgApplyStrangePart::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgApplyStrangePart::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgApplyStrangePart::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgApplyStrangePart_descriptor_;
}

const CMsgApplyStrangePart& CMsgApplyStrangePart::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgApplyStrangePart* CMsgApplyStrangePart::default_instance_ = NULL;

CMsgApplyStrangePart* CMsgApplyStrangePart::New() const {
	return new CMsgApplyStrangePart;
}

void CMsgApplyStrangePart::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		strange_part_item_id_ = GOOGLE_ULONGLONG(0);
		item_item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgApplyStrangePart::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 strange_part_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &strange_part_item_id_)));
				set_has_strange_part_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_item_id;
			break;
		}

			  // optional uint64 item_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_item_id_)));
				set_has_item_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgApplyStrangePart::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 strange_part_item_id = 1;
	if (has_strange_part_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->strange_part_item_id(), output);
	}

	// optional uint64 item_item_id = 2;
	if (has_item_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->item_item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgApplyStrangePart::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 strange_part_item_id = 1;
	if (has_strange_part_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->strange_part_item_id(), target);
	}

	// optional uint64 item_item_id = 2;
	if (has_item_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->item_item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgApplyStrangePart::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 strange_part_item_id = 1;
		if (has_strange_part_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->strange_part_item_id());
		}

		// optional uint64 item_item_id = 2;
		if (has_item_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgApplyStrangePart::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgApplyStrangePart* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgApplyStrangePart*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgApplyStrangePart::MergeFrom(const CMsgApplyStrangePart& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_strange_part_item_id()) {
			set_strange_part_item_id(from.strange_part_item_id());
		}
		if (from.has_item_item_id()) {
			set_item_item_id(from.item_item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgApplyStrangePart::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgApplyStrangePart::CopyFrom(const CMsgApplyStrangePart& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgApplyStrangePart::IsInitialized() const {

	return true;
}

void CMsgApplyStrangePart::Swap(CMsgApplyStrangePart* other) {
	if (other != this) {
		std::swap(strange_part_item_id_, other->strange_part_item_id_);
		std::swap(item_item_id_, other->item_item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgApplyStrangePart::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgApplyStrangePart_descriptor_;
	metadata.reflection = CMsgApplyStrangePart_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgApplyPennantUpgrade::kUpgradeItemIdFieldNumber;
const int CMsgApplyPennantUpgrade::kPennantItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgApplyPennantUpgrade::CMsgApplyPennantUpgrade()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgApplyPennantUpgrade::InitAsDefaultInstance() {
}

CMsgApplyPennantUpgrade::CMsgApplyPennantUpgrade(const CMsgApplyPennantUpgrade& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgApplyPennantUpgrade::SharedCtor() {
	_cached_size_ = 0;
	upgrade_item_id_ = GOOGLE_ULONGLONG(0);
	pennant_item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgApplyPennantUpgrade::~CMsgApplyPennantUpgrade() {
	SharedDtor();
}

void CMsgApplyPennantUpgrade::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgApplyPennantUpgrade::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgApplyPennantUpgrade::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgApplyPennantUpgrade_descriptor_;
}

const CMsgApplyPennantUpgrade& CMsgApplyPennantUpgrade::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgApplyPennantUpgrade* CMsgApplyPennantUpgrade::default_instance_ = NULL;

CMsgApplyPennantUpgrade* CMsgApplyPennantUpgrade::New() const {
	return new CMsgApplyPennantUpgrade;
}

void CMsgApplyPennantUpgrade::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		upgrade_item_id_ = GOOGLE_ULONGLONG(0);
		pennant_item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgApplyPennantUpgrade::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 upgrade_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &upgrade_item_id_)));
				set_has_upgrade_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_pennant_item_id;
			break;
		}

			  // optional uint64 pennant_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_pennant_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &pennant_item_id_)));
				set_has_pennant_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgApplyPennantUpgrade::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 upgrade_item_id = 1;
	if (has_upgrade_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->upgrade_item_id(), output);
	}

	// optional uint64 pennant_item_id = 2;
	if (has_pennant_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->pennant_item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgApplyPennantUpgrade::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 upgrade_item_id = 1;
	if (has_upgrade_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->upgrade_item_id(), target);
	}

	// optional uint64 pennant_item_id = 2;
	if (has_pennant_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->pennant_item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgApplyPennantUpgrade::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 upgrade_item_id = 1;
		if (has_upgrade_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->upgrade_item_id());
		}

		// optional uint64 pennant_item_id = 2;
		if (has_pennant_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->pennant_item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgApplyPennantUpgrade::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgApplyPennantUpgrade* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgApplyPennantUpgrade*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgApplyPennantUpgrade::MergeFrom(const CMsgApplyPennantUpgrade& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_upgrade_item_id()) {
			set_upgrade_item_id(from.upgrade_item_id());
		}
		if (from.has_pennant_item_id()) {
			set_pennant_item_id(from.pennant_item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgApplyPennantUpgrade::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgApplyPennantUpgrade::CopyFrom(const CMsgApplyPennantUpgrade& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgApplyPennantUpgrade::IsInitialized() const {

	return true;
}

void CMsgApplyPennantUpgrade::Swap(CMsgApplyPennantUpgrade* other) {
	if (other != this) {
		std::swap(upgrade_item_id_, other->upgrade_item_id_);
		std::swap(pennant_item_id_, other->pennant_item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgApplyPennantUpgrade::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgApplyPennantUpgrade_descriptor_;
	metadata.reflection = CMsgApplyPennantUpgrade_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgApplyEggEssence::kEssenceItemIdFieldNumber;
const int CMsgApplyEggEssence::kEggItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgApplyEggEssence::CMsgApplyEggEssence()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgApplyEggEssence::InitAsDefaultInstance() {
}

CMsgApplyEggEssence::CMsgApplyEggEssence(const CMsgApplyEggEssence& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgApplyEggEssence::SharedCtor() {
	_cached_size_ = 0;
	essence_item_id_ = GOOGLE_ULONGLONG(0);
	egg_item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgApplyEggEssence::~CMsgApplyEggEssence() {
	SharedDtor();
}

void CMsgApplyEggEssence::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgApplyEggEssence::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgApplyEggEssence::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgApplyEggEssence_descriptor_;
}

const CMsgApplyEggEssence& CMsgApplyEggEssence::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgApplyEggEssence* CMsgApplyEggEssence::default_instance_ = NULL;

CMsgApplyEggEssence* CMsgApplyEggEssence::New() const {
	return new CMsgApplyEggEssence;
}

void CMsgApplyEggEssence::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		essence_item_id_ = GOOGLE_ULONGLONG(0);
		egg_item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgApplyEggEssence::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 essence_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &essence_item_id_)));
				set_has_essence_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_egg_item_id;
			break;
		}

			  // optional uint64 egg_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_egg_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &egg_item_id_)));
				set_has_egg_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgApplyEggEssence::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 essence_item_id = 1;
	if (has_essence_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->essence_item_id(), output);
	}

	// optional uint64 egg_item_id = 2;
	if (has_egg_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->egg_item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgApplyEggEssence::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 essence_item_id = 1;
	if (has_essence_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->essence_item_id(), target);
	}

	// optional uint64 egg_item_id = 2;
	if (has_egg_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->egg_item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgApplyEggEssence::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 essence_item_id = 1;
		if (has_essence_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->essence_item_id());
		}

		// optional uint64 egg_item_id = 2;
		if (has_egg_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->egg_item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgApplyEggEssence::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgApplyEggEssence* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgApplyEggEssence*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgApplyEggEssence::MergeFrom(const CMsgApplyEggEssence& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_essence_item_id()) {
			set_essence_item_id(from.essence_item_id());
		}
		if (from.has_egg_item_id()) {
			set_egg_item_id(from.egg_item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgApplyEggEssence::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgApplyEggEssence::CopyFrom(const CMsgApplyEggEssence& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgApplyEggEssence::IsInitialized() const {

	return true;
}

void CMsgApplyEggEssence::Swap(CMsgApplyEggEssence* other) {
	if (other != this) {
		std::swap(essence_item_id_, other->essence_item_id_);
		std::swap(egg_item_id_, other->egg_item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgApplyEggEssence::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgApplyEggEssence_descriptor_;
	metadata.reflection = CMsgApplyEggEssence_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItemAttribute::kDefIndexFieldNumber;
const int CSOEconItemAttribute::kValueFieldNumber;
const int CSOEconItemAttribute::kValueBytesFieldNumber;
#endif  // !_MSC_VER

CSOEconItemAttribute::CSOEconItemAttribute()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItemAttribute::InitAsDefaultInstance() {
}

CSOEconItemAttribute::CSOEconItemAttribute(const CSOEconItemAttribute& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItemAttribute::SharedCtor() {
	_cached_size_ = 0;
	def_index_ = 0u;
	value_ = 0u;
	value_bytes_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItemAttribute::~CSOEconItemAttribute() {
	SharedDtor();
}

void CSOEconItemAttribute::SharedDtor() {
	if (value_bytes_ != &::google::protobuf::internal::kEmptyString) {
		delete value_bytes_;
	}
	if (this != default_instance_) {
	}
}

void CSOEconItemAttribute::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItemAttribute::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItemAttribute_descriptor_;
}

const CSOEconItemAttribute& CSOEconItemAttribute::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItemAttribute* CSOEconItemAttribute::default_instance_ = NULL;

CSOEconItemAttribute* CSOEconItemAttribute::New() const {
	return new CSOEconItemAttribute;
}

void CSOEconItemAttribute::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		def_index_ = 0u;
		value_ = 0u;
		if (has_value_bytes()) {
			if (value_bytes_ != &::google::protobuf::internal::kEmptyString) {
				value_bytes_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItemAttribute::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 def_index = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &def_index_)));
				set_has_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_value;
			break;
		}

			  // optional uint32 value = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_value:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &value_)));
				set_has_value();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_value_bytes;
			break;
		}

			  // optional bytes value_bytes = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_value_bytes:
				DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
					input, this->mutable_value_bytes()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItemAttribute::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 def_index = 1;
	if (has_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->def_index(), output);
	}

	// optional uint32 value = 2;
	if (has_value()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->value(), output);
	}

	// optional bytes value_bytes = 3;
	if (has_value_bytes()) {
		::google::protobuf::internal::WireFormatLite::WriteBytes(
			3, this->value_bytes(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItemAttribute::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 def_index = 1;
	if (has_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->def_index(), target);
	}

	// optional uint32 value = 2;
	if (has_value()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->value(), target);
	}

	// optional bytes value_bytes = 3;
	if (has_value_bytes()) {
		target =
			::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
				3, this->value_bytes(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItemAttribute::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 def_index = 1;
		if (has_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->def_index());
		}

		// optional uint32 value = 2;
		if (has_value()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->value());
		}

		// optional bytes value_bytes = 3;
		if (has_value_bytes()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::BytesSize(
					this->value_bytes());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItemAttribute::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItemAttribute* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItemAttribute*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItemAttribute::MergeFrom(const CSOEconItemAttribute& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_def_index()) {
			set_def_index(from.def_index());
		}
		if (from.has_value()) {
			set_value(from.value());
		}
		if (from.has_value_bytes()) {
			set_value_bytes(from.value_bytes());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItemAttribute::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItemAttribute::CopyFrom(const CSOEconItemAttribute& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItemAttribute::IsInitialized() const {

	return true;
}

void CSOEconItemAttribute::Swap(CSOEconItemAttribute* other) {
	if (other != this) {
		std::swap(def_index_, other->def_index_);
		std::swap(value_, other->value_);
		std::swap(value_bytes_, other->value_bytes_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItemAttribute::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItemAttribute_descriptor_;
	metadata.reflection = CSOEconItemAttribute_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItemEquipped::kNewClassFieldNumber;
const int CSOEconItemEquipped::kNewSlotFieldNumber;
#endif  // !_MSC_VER

CSOEconItemEquipped::CSOEconItemEquipped()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItemEquipped::InitAsDefaultInstance() {
}

CSOEconItemEquipped::CSOEconItemEquipped(const CSOEconItemEquipped& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItemEquipped::SharedCtor() {
	_cached_size_ = 0;
	new_class_ = 0u;
	new_slot_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItemEquipped::~CSOEconItemEquipped() {
	SharedDtor();
}

void CSOEconItemEquipped::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconItemEquipped::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItemEquipped::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItemEquipped_descriptor_;
}

const CSOEconItemEquipped& CSOEconItemEquipped::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItemEquipped* CSOEconItemEquipped::default_instance_ = NULL;

CSOEconItemEquipped* CSOEconItemEquipped::New() const {
	return new CSOEconItemEquipped;
}

void CSOEconItemEquipped::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		new_class_ = 0u;
		new_slot_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItemEquipped::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 new_class = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &new_class_)));
				set_has_new_class();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_new_slot;
			break;
		}

			  // optional uint32 new_slot = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_new_slot:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &new_slot_)));
				set_has_new_slot();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItemEquipped::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 new_class = 1;
	if (has_new_class()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->new_class(), output);
	}

	// optional uint32 new_slot = 2;
	if (has_new_slot()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->new_slot(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItemEquipped::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 new_class = 1;
	if (has_new_class()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->new_class(), target);
	}

	// optional uint32 new_slot = 2;
	if (has_new_slot()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->new_slot(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItemEquipped::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 new_class = 1;
		if (has_new_class()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->new_class());
		}

		// optional uint32 new_slot = 2;
		if (has_new_slot()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->new_slot());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItemEquipped::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItemEquipped* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItemEquipped*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItemEquipped::MergeFrom(const CSOEconItemEquipped& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_new_class()) {
			set_new_class(from.new_class());
		}
		if (from.has_new_slot()) {
			set_new_slot(from.new_slot());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItemEquipped::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItemEquipped::CopyFrom(const CSOEconItemEquipped& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItemEquipped::IsInitialized() const {

	return true;
}

void CSOEconItemEquipped::Swap(CSOEconItemEquipped* other) {
	if (other != this) {
		std::swap(new_class_, other->new_class_);
		std::swap(new_slot_, other->new_slot_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItemEquipped::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItemEquipped_descriptor_;
	metadata.reflection = CSOEconItemEquipped_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItem::kIdFieldNumber;
const int CSOEconItem::kAccountIdFieldNumber;
const int CSOEconItem::kInventoryFieldNumber;
const int CSOEconItem::kDefIndexFieldNumber;
const int CSOEconItem::kQuantityFieldNumber;
const int CSOEconItem::kLevelFieldNumber;
const int CSOEconItem::kQualityFieldNumber;
const int CSOEconItem::kFlagsFieldNumber;
const int CSOEconItem::kOriginFieldNumber;
const int CSOEconItem::kCustomNameFieldNumber;
const int CSOEconItem::kCustomDescFieldNumber;
const int CSOEconItem::kAttributeFieldNumber;
const int CSOEconItem::kInteriorItemFieldNumber;
const int CSOEconItem::kInUseFieldNumber;
const int CSOEconItem::kStyleFieldNumber;
const int CSOEconItem::kOriginalIdFieldNumber;
const int CSOEconItem::kEquippedStateFieldNumber;
const int CSOEconItem::kRarityFieldNumber;
#endif  // !_MSC_VER

CSOEconItem::CSOEconItem()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItem::InitAsDefaultInstance() {
	interior_item_ = const_cast<::CSOEconItem*>(&::CSOEconItem::default_instance());
}

CSOEconItem::CSOEconItem(const CSOEconItem& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItem::SharedCtor() {
	_cached_size_ = 0;
	id_ = GOOGLE_ULONGLONG(0);
	account_id_ = 0u;
	inventory_ = 0u;
	def_index_ = 0u;
	quantity_ = 0u;
	level_ = 0u;
	quality_ = 0u;
	flags_ = 0u;
	origin_ = 0u;
	custom_name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	custom_desc_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	interior_item_ = NULL;
	in_use_ = false;
	style_ = 0u;
	original_id_ = GOOGLE_ULONGLONG(0);
	rarity_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItem::~CSOEconItem() {
	SharedDtor();
}

void CSOEconItem::SharedDtor() {
	if (custom_name_ != &::google::protobuf::internal::kEmptyString) {
		delete custom_name_;
	}
	if (custom_desc_ != &::google::protobuf::internal::kEmptyString) {
		delete custom_desc_;
	}
	if (this != default_instance_) {
		delete interior_item_;
	}
}

void CSOEconItem::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItem::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItem_descriptor_;
}

const CSOEconItem& CSOEconItem::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItem* CSOEconItem::default_instance_ = NULL;

CSOEconItem* CSOEconItem::New() const {
	return new CSOEconItem;
}

void CSOEconItem::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		id_ = GOOGLE_ULONGLONG(0);
		account_id_ = 0u;
		inventory_ = 0u;
		def_index_ = 0u;
		quantity_ = 0u;
		level_ = 0u;
		quality_ = 0u;
		flags_ = 0u;
	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		origin_ = 0u;
		if (has_custom_name()) {
			if (custom_name_ != &::google::protobuf::internal::kEmptyString) {
				custom_name_->clear();
			}
		}
		if (has_custom_desc()) {
			if (custom_desc_ != &::google::protobuf::internal::kEmptyString) {
				custom_desc_->clear();
			}
		}
		if (has_interior_item()) {
			if (interior_item_ != NULL) interior_item_->::CSOEconItem::Clear();
		}
		in_use_ = false;
		style_ = 0u;
		original_id_ = GOOGLE_ULONGLONG(0);
	}
	if (_has_bits_[17 / 32] & (0xffu << (17 % 32))) {
		rarity_ = 0u;
	}
	attribute_.Clear();
	equipped_state_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItem::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &id_)));
				set_has_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_account_id;
			break;
		}

			  // optional uint32 account_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_account_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_inventory;
			break;
		}

			  // optional uint32 inventory = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_inventory:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &inventory_)));
				set_has_inventory();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_def_index;
			break;
		}

			  // optional uint32 def_index = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_def_index:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &def_index_)));
				set_has_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_quantity;
			break;
		}

			  // optional uint32 quantity = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_quantity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &quantity_)));
				set_has_quantity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(48)) goto parse_level;
			break;
		}

			  // optional uint32 level = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_level:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &level_)));
				set_has_level();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(56)) goto parse_quality;
			break;
		}

			  // optional uint32 quality = 7;
		case 7: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_quality:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &quality_)));
				set_has_quality();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(64)) goto parse_flags;
			break;
		}

			  // optional uint32 flags = 8 [default = 0];
		case 8: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_flags:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &flags_)));
				set_has_flags();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(72)) goto parse_origin;
			break;
		}

			  // optional uint32 origin = 9;
		case 9: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_origin:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &origin_)));
				set_has_origin();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(82)) goto parse_custom_name;
			break;
		}

			  // optional string custom_name = 10;
		case 10: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_custom_name:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_custom_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->custom_name().data(), this->custom_name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(90)) goto parse_custom_desc;
			break;
		}

			   // optional string custom_desc = 11;
		case 11: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_custom_desc:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_custom_desc()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->custom_desc().data(), this->custom_desc().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(98)) goto parse_attribute;
			break;
		}

			   // repeated .CSOEconItemAttribute attribute = 12;
		case 12: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_attribute:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_attribute()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(98)) goto parse_attribute;
			if (input->ExpectTag(106)) goto parse_interior_item;
			break;
		}

			   // optional .CSOEconItem interior_item = 13;
		case 13: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_interior_item:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, mutable_interior_item()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(112)) goto parse_in_use;
			break;
		}

			   // optional bool in_use = 14 [default = false];
		case 14: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_in_use:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &in_use_)));
				set_has_in_use();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(120)) goto parse_style;
			break;
		}

			   // optional uint32 style = 15 [default = 0];
		case 15: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_style:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &style_)));
				set_has_style();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(128)) goto parse_original_id;
			break;
		}

			   // optional uint64 original_id = 16 [default = 0];
		case 16: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_original_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &original_id_)));
				set_has_original_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(146)) goto parse_equipped_state;
			break;
		}

			   // repeated .CSOEconItemEquipped equipped_state = 18;
		case 18: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_equipped_state:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_equipped_state()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(146)) goto parse_equipped_state;
			if (input->ExpectTag(152)) goto parse_rarity;
			break;
		}

			   // optional uint32 rarity = 19;
		case 19: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_rarity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &rarity_)));
				set_has_rarity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItem::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 id = 1;
	if (has_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
	}

	// optional uint32 account_id = 2;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->account_id(), output);
	}

	// optional uint32 inventory = 3;
	if (has_inventory()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->inventory(), output);
	}

	// optional uint32 def_index = 4;
	if (has_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->def_index(), output);
	}

	// optional uint32 quantity = 5;
	if (has_quantity()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->quantity(), output);
	}

	// optional uint32 level = 6;
	if (has_level()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->level(), output);
	}

	// optional uint32 quality = 7;
	if (has_quality()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->quality(), output);
	}

	// optional uint32 flags = 8 [default = 0];
	if (has_flags()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->flags(), output);
	}

	// optional uint32 origin = 9;
	if (has_origin()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->origin(), output);
	}

	// optional string custom_name = 10;
	if (has_custom_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->custom_name().data(), this->custom_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			10, this->custom_name(), output);
	}

	// optional string custom_desc = 11;
	if (has_custom_desc()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->custom_desc().data(), this->custom_desc().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			11, this->custom_desc(), output);
	}

	// repeated .CSOEconItemAttribute attribute = 12;
	for (int i = 0; i < this->attribute_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			12, this->attribute(i), output);
	}

	// optional .CSOEconItem interior_item = 13;
	if (has_interior_item()) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			13, this->interior_item(), output);
	}

	// optional bool in_use = 14 [default = false];
	if (has_in_use()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(14, this->in_use(), output);
	}

	// optional uint32 style = 15 [default = 0];
	if (has_style()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->style(), output);
	}

	// optional uint64 original_id = 16 [default = 0];
	if (has_original_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(16, this->original_id(), output);
	}

	// repeated .CSOEconItemEquipped equipped_state = 18;
	for (int i = 0; i < this->equipped_state_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			18, this->equipped_state(i), output);
	}

	// optional uint32 rarity = 19;
	if (has_rarity()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(19, this->rarity(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItem::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 id = 1;
	if (has_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
	}

	// optional uint32 account_id = 2;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->account_id(), target);
	}

	// optional uint32 inventory = 3;
	if (has_inventory()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->inventory(), target);
	}

	// optional uint32 def_index = 4;
	if (has_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->def_index(), target);
	}

	// optional uint32 quantity = 5;
	if (has_quantity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->quantity(), target);
	}

	// optional uint32 level = 6;
	if (has_level()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->level(), target);
	}

	// optional uint32 quality = 7;
	if (has_quality()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->quality(), target);
	}

	// optional uint32 flags = 8 [default = 0];
	if (has_flags()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->flags(), target);
	}

	// optional uint32 origin = 9;
	if (has_origin()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->origin(), target);
	}

	// optional string custom_name = 10;
	if (has_custom_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->custom_name().data(), this->custom_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				10, this->custom_name(), target);
	}

	// optional string custom_desc = 11;
	if (has_custom_desc()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->custom_desc().data(), this->custom_desc().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				11, this->custom_desc(), target);
	}

	// repeated .CSOEconItemAttribute attribute = 12;
	for (int i = 0; i < this->attribute_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				12, this->attribute(i), target);
	}

	// optional .CSOEconItem interior_item = 13;
	if (has_interior_item()) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				13, this->interior_item(), target);
	}

	// optional bool in_use = 14 [default = false];
	if (has_in_use()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->in_use(), target);
	}

	// optional uint32 style = 15 [default = 0];
	if (has_style()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->style(), target);
	}

	// optional uint64 original_id = 16 [default = 0];
	if (has_original_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(16, this->original_id(), target);
	}

	// repeated .CSOEconItemEquipped equipped_state = 18;
	for (int i = 0; i < this->equipped_state_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				18, this->equipped_state(i), target);
	}

	// optional uint32 rarity = 19;
	if (has_rarity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(19, this->rarity(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItem::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 id = 1;
		if (has_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->id());
		}

		// optional uint32 account_id = 2;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 inventory = 3;
		if (has_inventory()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->inventory());
		}

		// optional uint32 def_index = 4;
		if (has_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->def_index());
		}

		// optional uint32 quantity = 5;
		if (has_quantity()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->quantity());
		}

		// optional uint32 level = 6;
		if (has_level()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->level());
		}

		// optional uint32 quality = 7;
		if (has_quality()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->quality());
		}

		// optional uint32 flags = 8 [default = 0];
		if (has_flags()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->flags());
		}

	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		// optional uint32 origin = 9;
		if (has_origin()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->origin());
		}

		// optional string custom_name = 10;
		if (has_custom_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->custom_name());
		}

		// optional string custom_desc = 11;
		if (has_custom_desc()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->custom_desc());
		}

		// optional .CSOEconItem interior_item = 13;
		if (has_interior_item()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
					this->interior_item());
		}

		// optional bool in_use = 14 [default = false];
		if (has_in_use()) {
			total_size += 1 + 1;
		}

		// optional uint32 style = 15 [default = 0];
		if (has_style()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->style());
		}

		// optional uint64 original_id = 16 [default = 0];
		if (has_original_id()) {
			total_size += 2 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->original_id());
		}

	}
	if (_has_bits_[17 / 32] & (0xffu << (17 % 32))) {
		// optional uint32 rarity = 19;
		if (has_rarity()) {
			total_size += 2 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->rarity());
		}

	}
	// repeated .CSOEconItemAttribute attribute = 12;
	total_size += 1 * this->attribute_size();
	for (int i = 0; i < this->attribute_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->attribute(i));
	}

	// repeated .CSOEconItemEquipped equipped_state = 18;
	total_size += 2 * this->equipped_state_size();
	for (int i = 0; i < this->equipped_state_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->equipped_state(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItem::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItem* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItem*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItem::MergeFrom(const CSOEconItem& from) {
	GOOGLE_CHECK_NE(&from, this);
	attribute_.MergeFrom(from.attribute_);
	equipped_state_.MergeFrom(from.equipped_state_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_id()) {
			set_id(from.id());
		}
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_inventory()) {
			set_inventory(from.inventory());
		}
		if (from.has_def_index()) {
			set_def_index(from.def_index());
		}
		if (from.has_quantity()) {
			set_quantity(from.quantity());
		}
		if (from.has_level()) {
			set_level(from.level());
		}
		if (from.has_quality()) {
			set_quality(from.quality());
		}
		if (from.has_flags()) {
			set_flags(from.flags());
		}
	}
	if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		if (from.has_origin()) {
			set_origin(from.origin());
		}
		if (from.has_custom_name()) {
			set_custom_name(from.custom_name());
		}
		if (from.has_custom_desc()) {
			set_custom_desc(from.custom_desc());
		}
		if (from.has_interior_item()) {
			mutable_interior_item()->::CSOEconItem::MergeFrom(from.interior_item());
		}
		if (from.has_in_use()) {
			set_in_use(from.in_use());
		}
		if (from.has_style()) {
			set_style(from.style());
		}
		if (from.has_original_id()) {
			set_original_id(from.original_id());
		}
	}
	if (from._has_bits_[17 / 32] & (0xffu << (17 % 32))) {
		if (from.has_rarity()) {
			set_rarity(from.rarity());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItem::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItem::CopyFrom(const CSOEconItem& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItem::IsInitialized() const {

	return true;
}

void CSOEconItem::Swap(CSOEconItem* other) {
	if (other != this) {
		std::swap(id_, other->id_);
		std::swap(account_id_, other->account_id_);
		std::swap(inventory_, other->inventory_);
		std::swap(def_index_, other->def_index_);
		std::swap(quantity_, other->quantity_);
		std::swap(level_, other->level_);
		std::swap(quality_, other->quality_);
		std::swap(flags_, other->flags_);
		std::swap(origin_, other->origin_);
		std::swap(custom_name_, other->custom_name_);
		std::swap(custom_desc_, other->custom_desc_);
		attribute_.Swap(&other->attribute_);
		std::swap(interior_item_, other->interior_item_);
		std::swap(in_use_, other->in_use_);
		std::swap(style_, other->style_);
		std::swap(original_id_, other->original_id_);
		equipped_state_.Swap(&other->equipped_state_);
		std::swap(rarity_, other->rarity_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItem::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItem_descriptor_;
	metadata.reflection = CSOEconItem_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgAdjustItemEquippedState::kItemIdFieldNumber;
const int CMsgAdjustItemEquippedState::kNewClassFieldNumber;
const int CMsgAdjustItemEquippedState::kNewSlotFieldNumber;
const int CMsgAdjustItemEquippedState::kSwapFieldNumber;
#endif  // !_MSC_VER

CMsgAdjustItemEquippedState::CMsgAdjustItemEquippedState()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgAdjustItemEquippedState::InitAsDefaultInstance() {
}

CMsgAdjustItemEquippedState::CMsgAdjustItemEquippedState(const CMsgAdjustItemEquippedState& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgAdjustItemEquippedState::SharedCtor() {
	_cached_size_ = 0;
	item_id_ = GOOGLE_ULONGLONG(0);
	new_class_ = 0u;
	new_slot_ = 0u;
	swap_ = false;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgAdjustItemEquippedState::~CMsgAdjustItemEquippedState() {
	SharedDtor();
}

void CMsgAdjustItemEquippedState::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgAdjustItemEquippedState::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgAdjustItemEquippedState::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgAdjustItemEquippedState_descriptor_;
}

const CMsgAdjustItemEquippedState& CMsgAdjustItemEquippedState::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgAdjustItemEquippedState* CMsgAdjustItemEquippedState::default_instance_ = NULL;

CMsgAdjustItemEquippedState* CMsgAdjustItemEquippedState::New() const {
	return new CMsgAdjustItemEquippedState;
}

void CMsgAdjustItemEquippedState::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_id_ = GOOGLE_ULONGLONG(0);
		new_class_ = 0u;
		new_slot_ = 0u;
		swap_ = false;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgAdjustItemEquippedState::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_new_class;
			break;
		}

			  // optional uint32 new_class = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_new_class:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &new_class_)));
				set_has_new_class();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_new_slot;
			break;
		}

			  // optional uint32 new_slot = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_new_slot:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &new_slot_)));
				set_has_new_slot();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_swap;
			break;
		}

			  // optional bool swap = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_swap:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &swap_)));
				set_has_swap();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgAdjustItemEquippedState::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 item_id = 1;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->item_id(), output);
	}

	// optional uint32 new_class = 2;
	if (has_new_class()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->new_class(), output);
	}

	// optional uint32 new_slot = 3;
	if (has_new_slot()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->new_slot(), output);
	}

	// optional bool swap = 4;
	if (has_swap()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(4, this->swap(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgAdjustItemEquippedState::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 item_id = 1;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->item_id(), target);
	}

	// optional uint32 new_class = 2;
	if (has_new_class()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->new_class(), target);
	}

	// optional uint32 new_slot = 3;
	if (has_new_slot()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->new_slot(), target);
	}

	// optional bool swap = 4;
	if (has_swap()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->swap(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgAdjustItemEquippedState::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 item_id = 1;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

		// optional uint32 new_class = 2;
		if (has_new_class()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->new_class());
		}

		// optional uint32 new_slot = 3;
		if (has_new_slot()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->new_slot());
		}

		// optional bool swap = 4;
		if (has_swap()) {
			total_size += 1 + 1;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgAdjustItemEquippedState::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgAdjustItemEquippedState* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgAdjustItemEquippedState*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgAdjustItemEquippedState::MergeFrom(const CMsgAdjustItemEquippedState& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
		if (from.has_new_class()) {
			set_new_class(from.new_class());
		}
		if (from.has_new_slot()) {
			set_new_slot(from.new_slot());
		}
		if (from.has_swap()) {
			set_swap(from.swap());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgAdjustItemEquippedState::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgAdjustItemEquippedState::CopyFrom(const CMsgAdjustItemEquippedState& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgAdjustItemEquippedState::IsInitialized() const {

	return true;
}

void CMsgAdjustItemEquippedState::Swap(CMsgAdjustItemEquippedState* other) {
	if (other != this) {
		std::swap(item_id_, other->item_id_);
		std::swap(new_class_, other->new_class_);
		std::swap(new_slot_, other->new_slot_);
		std::swap(swap_, other->swap_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgAdjustItemEquippedState::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgAdjustItemEquippedState_descriptor_;
	metadata.reflection = CMsgAdjustItemEquippedState_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgSortItems::kSortTypeFieldNumber;
#endif  // !_MSC_VER

CMsgSortItems::CMsgSortItems()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgSortItems::InitAsDefaultInstance() {
}

CMsgSortItems::CMsgSortItems(const CMsgSortItems& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgSortItems::SharedCtor() {
	_cached_size_ = 0;
	sort_type_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgSortItems::~CMsgSortItems() {
	SharedDtor();
}

void CMsgSortItems::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgSortItems::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgSortItems::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgSortItems_descriptor_;
}

const CMsgSortItems& CMsgSortItems::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgSortItems* CMsgSortItems::default_instance_ = NULL;

CMsgSortItems* CMsgSortItems::New() const {
	return new CMsgSortItems;
}

void CMsgSortItems::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		sort_type_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgSortItems::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 sort_type = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &sort_type_)));
				set_has_sort_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgSortItems::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 sort_type = 1;
	if (has_sort_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sort_type(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgSortItems::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 sort_type = 1;
	if (has_sort_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sort_type(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgSortItems::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 sort_type = 1;
		if (has_sort_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->sort_type());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgSortItems::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgSortItems* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgSortItems*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgSortItems::MergeFrom(const CMsgSortItems& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_sort_type()) {
			set_sort_type(from.sort_type());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgSortItems::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgSortItems::CopyFrom(const CMsgSortItems& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgSortItems::IsInitialized() const {

	return true;
}

void CMsgSortItems::Swap(CMsgSortItems* other) {
	if (other != this) {
		std::swap(sort_type_, other->sort_type_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgSortItems::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgSortItems_descriptor_;
	metadata.reflection = CMsgSortItems_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconClaimCode::kAccountIdFieldNumber;
const int CSOEconClaimCode::kCodeTypeFieldNumber;
const int CSOEconClaimCode::kTimeAcquiredFieldNumber;
const int CSOEconClaimCode::kCodeFieldNumber;
#endif  // !_MSC_VER

CSOEconClaimCode::CSOEconClaimCode()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconClaimCode::InitAsDefaultInstance() {
}

CSOEconClaimCode::CSOEconClaimCode(const CSOEconClaimCode& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconClaimCode::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	code_type_ = 0u;
	time_acquired_ = 0u;
	code_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconClaimCode::~CSOEconClaimCode() {
	SharedDtor();
}

void CSOEconClaimCode::SharedDtor() {
	if (code_ != &::google::protobuf::internal::kEmptyString) {
		delete code_;
	}
	if (this != default_instance_) {
	}
}

void CSOEconClaimCode::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconClaimCode::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconClaimCode_descriptor_;
}

const CSOEconClaimCode& CSOEconClaimCode::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconClaimCode* CSOEconClaimCode::default_instance_ = NULL;

CSOEconClaimCode* CSOEconClaimCode::New() const {
	return new CSOEconClaimCode;
}

void CSOEconClaimCode::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		code_type_ = 0u;
		time_acquired_ = 0u;
		if (has_code()) {
			if (code_ != &::google::protobuf::internal::kEmptyString) {
				code_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconClaimCode::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_code_type;
			break;
		}

			  // optional uint32 code_type = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_code_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &code_type_)));
				set_has_code_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_time_acquired;
			break;
		}

			  // optional uint32 time_acquired = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_time_acquired:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &time_acquired_)));
				set_has_time_acquired();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_code;
			break;
		}

			  // optional string code = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_code:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_code()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->code().data(), this->code().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconClaimCode::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional uint32 code_type = 2;
	if (has_code_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->code_type(), output);
	}

	// optional uint32 time_acquired = 3;
	if (has_time_acquired()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->time_acquired(), output);
	}

	// optional string code = 4;
	if (has_code()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->code().data(), this->code().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->code(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconClaimCode::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional uint32 code_type = 2;
	if (has_code_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->code_type(), target);
	}

	// optional uint32 time_acquired = 3;
	if (has_time_acquired()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->time_acquired(), target);
	}

	// optional string code = 4;
	if (has_code()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->code().data(), this->code().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				4, this->code(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconClaimCode::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 code_type = 2;
		if (has_code_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->code_type());
		}

		// optional uint32 time_acquired = 3;
		if (has_time_acquired()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->time_acquired());
		}

		// optional string code = 4;
		if (has_code()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->code());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconClaimCode::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconClaimCode* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconClaimCode*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconClaimCode::MergeFrom(const CSOEconClaimCode& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_code_type()) {
			set_code_type(from.code_type());
		}
		if (from.has_time_acquired()) {
			set_time_acquired(from.time_acquired());
		}
		if (from.has_code()) {
			set_code(from.code());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconClaimCode::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconClaimCode::CopyFrom(const CSOEconClaimCode& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconClaimCode::IsInitialized() const {

	return true;
}

void CSOEconClaimCode::Swap(CSOEconClaimCode* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(code_type_, other->code_type_);
		std::swap(time_acquired_, other->time_acquired_);
		std::swap(code_, other->code_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconClaimCode::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconClaimCode_descriptor_;
	metadata.reflection = CSOEconClaimCode_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgStoreGetUserData::kPriceSheetVersionFieldNumber;
const int CMsgStoreGetUserData::kCurrencyFieldNumber;
#endif  // !_MSC_VER

CMsgStoreGetUserData::CMsgStoreGetUserData()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgStoreGetUserData::InitAsDefaultInstance() {
}

CMsgStoreGetUserData::CMsgStoreGetUserData(const CMsgStoreGetUserData& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgStoreGetUserData::SharedCtor() {
	_cached_size_ = 0;
	price_sheet_version_ = 0u;
	currency_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgStoreGetUserData::~CMsgStoreGetUserData() {
	SharedDtor();
}

void CMsgStoreGetUserData::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgStoreGetUserData::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgStoreGetUserData::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgStoreGetUserData_descriptor_;
}

const CMsgStoreGetUserData& CMsgStoreGetUserData::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgStoreGetUserData* CMsgStoreGetUserData::default_instance_ = NULL;

CMsgStoreGetUserData* CMsgStoreGetUserData::New() const {
	return new CMsgStoreGetUserData;
}

void CMsgStoreGetUserData::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		price_sheet_version_ = 0u;
		currency_ = 0;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgStoreGetUserData::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed32 price_sheet_version = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &price_sheet_version_)));
				set_has_price_sheet_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_currency;
			break;
		}

			  // optional int32 currency = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_currency:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &currency_)));
				set_has_currency();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgStoreGetUserData::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed32 price_sheet_version = 1;
	if (has_price_sheet_version()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->price_sheet_version(), output);
	}

	// optional int32 currency = 2;
	if (has_currency()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->currency(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgStoreGetUserData::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed32 price_sheet_version = 1;
	if (has_price_sheet_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->price_sheet_version(), target);
	}

	// optional int32 currency = 2;
	if (has_currency()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->currency(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgStoreGetUserData::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed32 price_sheet_version = 1;
		if (has_price_sheet_version()) {
			total_size += 1 + 4;
		}

		// optional int32 currency = 2;
		if (has_currency()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->currency());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgStoreGetUserData::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgStoreGetUserData* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgStoreGetUserData*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgStoreGetUserData::MergeFrom(const CMsgStoreGetUserData& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_price_sheet_version()) {
			set_price_sheet_version(from.price_sheet_version());
		}
		if (from.has_currency()) {
			set_currency(from.currency());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgStoreGetUserData::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgStoreGetUserData::CopyFrom(const CMsgStoreGetUserData& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgStoreGetUserData::IsInitialized() const {

	return true;
}

void CMsgStoreGetUserData::Swap(CMsgStoreGetUserData* other) {
	if (other != this) {
		std::swap(price_sheet_version_, other->price_sheet_version_);
		std::swap(currency_, other->currency_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgStoreGetUserData::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgStoreGetUserData_descriptor_;
	metadata.reflection = CMsgStoreGetUserData_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgStoreGetUserDataResponse::kResultFieldNumber;
const int CMsgStoreGetUserDataResponse::kCurrencyDeprecatedFieldNumber;
const int CMsgStoreGetUserDataResponse::kCountryDeprecatedFieldNumber;
const int CMsgStoreGetUserDataResponse::kPriceSheetVersionFieldNumber;
const int CMsgStoreGetUserDataResponse::kPriceSheetFieldNumber;
#endif  // !_MSC_VER

CMsgStoreGetUserDataResponse::CMsgStoreGetUserDataResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgStoreGetUserDataResponse::InitAsDefaultInstance() {
}

CMsgStoreGetUserDataResponse::CMsgStoreGetUserDataResponse(const CMsgStoreGetUserDataResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgStoreGetUserDataResponse::SharedCtor() {
	_cached_size_ = 0;
	result_ = 0;
	currency_deprecated_ = 0;
	country_deprecated_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	price_sheet_version_ = 0u;
	price_sheet_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgStoreGetUserDataResponse::~CMsgStoreGetUserDataResponse() {
	SharedDtor();
}

void CMsgStoreGetUserDataResponse::SharedDtor() {
	if (country_deprecated_ != &::google::protobuf::internal::kEmptyString) {
		delete country_deprecated_;
	}
	if (price_sheet_ != &::google::protobuf::internal::kEmptyString) {
		delete price_sheet_;
	}
	if (this != default_instance_) {
	}
}

void CMsgStoreGetUserDataResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgStoreGetUserDataResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgStoreGetUserDataResponse_descriptor_;
}

const CMsgStoreGetUserDataResponse& CMsgStoreGetUserDataResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgStoreGetUserDataResponse* CMsgStoreGetUserDataResponse::default_instance_ = NULL;

CMsgStoreGetUserDataResponse* CMsgStoreGetUserDataResponse::New() const {
	return new CMsgStoreGetUserDataResponse;
}

void CMsgStoreGetUserDataResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		result_ = 0;
		currency_deprecated_ = 0;
		if (has_country_deprecated()) {
			if (country_deprecated_ != &::google::protobuf::internal::kEmptyString) {
				country_deprecated_->clear();
			}
		}
		price_sheet_version_ = 0u;
		if (has_price_sheet()) {
			if (price_sheet_ != &::google::protobuf::internal::kEmptyString) {
				price_sheet_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgStoreGetUserDataResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional int32 result = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &result_)));
				set_has_result();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_currency_deprecated;
			break;
		}

			  // optional int32 currency_deprecated = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_currency_deprecated:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &currency_deprecated_)));
				set_has_currency_deprecated();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_country_deprecated;
			break;
		}

			  // optional string country_deprecated = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_country_deprecated:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_country_deprecated()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->country_deprecated().data(), this->country_deprecated().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(37)) goto parse_price_sheet_version;
			break;
		}

			  // optional fixed32 price_sheet_version = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_price_sheet_version:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &price_sheet_version_)));
				set_has_price_sheet_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(66)) goto parse_price_sheet;
			break;
		}

			  // optional bytes price_sheet = 8;
		case 8: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_price_sheet:
				DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
					input, this->mutable_price_sheet()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgStoreGetUserDataResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional int32 result = 1;
	if (has_result()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
	}

	// optional int32 currency_deprecated = 2;
	if (has_currency_deprecated()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->currency_deprecated(), output);
	}

	// optional string country_deprecated = 3;
	if (has_country_deprecated()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->country_deprecated().data(), this->country_deprecated().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->country_deprecated(), output);
	}

	// optional fixed32 price_sheet_version = 4;
	if (has_price_sheet_version()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(4, this->price_sheet_version(), output);
	}

	// optional bytes price_sheet = 8;
	if (has_price_sheet()) {
		::google::protobuf::internal::WireFormatLite::WriteBytes(
			8, this->price_sheet(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgStoreGetUserDataResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional int32 result = 1;
	if (has_result()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
	}

	// optional int32 currency_deprecated = 2;
	if (has_currency_deprecated()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->currency_deprecated(), target);
	}

	// optional string country_deprecated = 3;
	if (has_country_deprecated()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->country_deprecated().data(), this->country_deprecated().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->country_deprecated(), target);
	}

	// optional fixed32 price_sheet_version = 4;
	if (has_price_sheet_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(4, this->price_sheet_version(), target);
	}

	// optional bytes price_sheet = 8;
	if (has_price_sheet()) {
		target =
			::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
				8, this->price_sheet(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgStoreGetUserDataResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional int32 result = 1;
		if (has_result()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->result());
		}

		// optional int32 currency_deprecated = 2;
		if (has_currency_deprecated()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->currency_deprecated());
		}

		// optional string country_deprecated = 3;
		if (has_country_deprecated()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->country_deprecated());
		}

		// optional fixed32 price_sheet_version = 4;
		if (has_price_sheet_version()) {
			total_size += 1 + 4;
		}

		// optional bytes price_sheet = 8;
		if (has_price_sheet()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::BytesSize(
					this->price_sheet());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgStoreGetUserDataResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgStoreGetUserDataResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgStoreGetUserDataResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgStoreGetUserDataResponse::MergeFrom(const CMsgStoreGetUserDataResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_result()) {
			set_result(from.result());
		}
		if (from.has_currency_deprecated()) {
			set_currency_deprecated(from.currency_deprecated());
		}
		if (from.has_country_deprecated()) {
			set_country_deprecated(from.country_deprecated());
		}
		if (from.has_price_sheet_version()) {
			set_price_sheet_version(from.price_sheet_version());
		}
		if (from.has_price_sheet()) {
			set_price_sheet(from.price_sheet());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgStoreGetUserDataResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgStoreGetUserDataResponse::CopyFrom(const CMsgStoreGetUserDataResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgStoreGetUserDataResponse::IsInitialized() const {

	return true;
}

void CMsgStoreGetUserDataResponse::Swap(CMsgStoreGetUserDataResponse* other) {
	if (other != this) {
		std::swap(result_, other->result_);
		std::swap(currency_deprecated_, other->currency_deprecated_);
		std::swap(country_deprecated_, other->country_deprecated_);
		std::swap(price_sheet_version_, other->price_sheet_version_);
		std::swap(price_sheet_, other->price_sheet_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgStoreGetUserDataResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgStoreGetUserDataResponse_descriptor_;
	metadata.reflection = CMsgStoreGetUserDataResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgUpdateItemSchema::kItemsGameFieldNumber;
const int CMsgUpdateItemSchema::kItemSchemaVersionFieldNumber;
const int CMsgUpdateItemSchema::kItemsGameUrlDEPRECATED2013FieldNumber;
const int CMsgUpdateItemSchema::kItemsGameUrlFieldNumber;
#endif  // !_MSC_VER

CMsgUpdateItemSchema::CMsgUpdateItemSchema()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgUpdateItemSchema::InitAsDefaultInstance() {
}

CMsgUpdateItemSchema::CMsgUpdateItemSchema(const CMsgUpdateItemSchema& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgUpdateItemSchema::SharedCtor() {
	_cached_size_ = 0;
	items_game_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	item_schema_version_ = 0u;
	items_game_url_deprecated2013_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	items_game_url_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgUpdateItemSchema::~CMsgUpdateItemSchema() {
	SharedDtor();
}

void CMsgUpdateItemSchema::SharedDtor() {
	if (items_game_ != &::google::protobuf::internal::kEmptyString) {
		delete items_game_;
	}
	if (items_game_url_deprecated2013_ != &::google::protobuf::internal::kEmptyString) {
		delete items_game_url_deprecated2013_;
	}
	if (items_game_url_ != &::google::protobuf::internal::kEmptyString) {
		delete items_game_url_;
	}
	if (this != default_instance_) {
	}
}

void CMsgUpdateItemSchema::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgUpdateItemSchema::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgUpdateItemSchema_descriptor_;
}

const CMsgUpdateItemSchema& CMsgUpdateItemSchema::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgUpdateItemSchema* CMsgUpdateItemSchema::default_instance_ = NULL;

CMsgUpdateItemSchema* CMsgUpdateItemSchema::New() const {
	return new CMsgUpdateItemSchema;
}

void CMsgUpdateItemSchema::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_items_game()) {
			if (items_game_ != &::google::protobuf::internal::kEmptyString) {
				items_game_->clear();
			}
		}
		item_schema_version_ = 0u;
		if (has_items_game_url_deprecated2013()) {
			if (items_game_url_deprecated2013_ != &::google::protobuf::internal::kEmptyString) {
				items_game_url_deprecated2013_->clear();
			}
		}
		if (has_items_game_url()) {
			if (items_game_url_ != &::google::protobuf::internal::kEmptyString) {
				items_game_url_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgUpdateItemSchema::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional bytes items_game = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
					input, this->mutable_items_game()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(21)) goto parse_item_schema_version;
			break;
		}

			  // optional fixed32 item_schema_version = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_item_schema_version:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &item_schema_version_)));
				set_has_item_schema_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_items_game_url_DEPRECATED2013;
			break;
		}

			  // optional string items_game_url_DEPRECATED2013 = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_items_game_url_DEPRECATED2013:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_items_game_url_deprecated2013()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->items_game_url_deprecated2013().data(), this->items_game_url_deprecated2013().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_items_game_url;
			break;
		}

			  // optional string items_game_url = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_items_game_url:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_items_game_url()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->items_game_url().data(), this->items_game_url().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgUpdateItemSchema::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional bytes items_game = 1;
	if (has_items_game()) {
		::google::protobuf::internal::WireFormatLite::WriteBytes(
			1, this->items_game(), output);
	}

	// optional fixed32 item_schema_version = 2;
	if (has_item_schema_version()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->item_schema_version(), output);
	}

	// optional string items_game_url_DEPRECATED2013 = 3;
	if (has_items_game_url_deprecated2013()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->items_game_url_deprecated2013().data(), this->items_game_url_deprecated2013().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->items_game_url_deprecated2013(), output);
	}

	// optional string items_game_url = 4;
	if (has_items_game_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->items_game_url().data(), this->items_game_url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->items_game_url(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgUpdateItemSchema::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional bytes items_game = 1;
	if (has_items_game()) {
		target =
			::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
				1, this->items_game(), target);
	}

	// optional fixed32 item_schema_version = 2;
	if (has_item_schema_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->item_schema_version(), target);
	}

	// optional string items_game_url_DEPRECATED2013 = 3;
	if (has_items_game_url_deprecated2013()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->items_game_url_deprecated2013().data(), this->items_game_url_deprecated2013().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->items_game_url_deprecated2013(), target);
	}

	// optional string items_game_url = 4;
	if (has_items_game_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->items_game_url().data(), this->items_game_url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				4, this->items_game_url(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgUpdateItemSchema::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional bytes items_game = 1;
		if (has_items_game()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::BytesSize(
					this->items_game());
		}

		// optional fixed32 item_schema_version = 2;
		if (has_item_schema_version()) {
			total_size += 1 + 4;
		}

		// optional string items_game_url_DEPRECATED2013 = 3;
		if (has_items_game_url_deprecated2013()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->items_game_url_deprecated2013());
		}

		// optional string items_game_url = 4;
		if (has_items_game_url()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->items_game_url());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgUpdateItemSchema::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgUpdateItemSchema* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgUpdateItemSchema*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgUpdateItemSchema::MergeFrom(const CMsgUpdateItemSchema& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_items_game()) {
			set_items_game(from.items_game());
		}
		if (from.has_item_schema_version()) {
			set_item_schema_version(from.item_schema_version());
		}
		if (from.has_items_game_url_deprecated2013()) {
			set_items_game_url_deprecated2013(from.items_game_url_deprecated2013());
		}
		if (from.has_items_game_url()) {
			set_items_game_url(from.items_game_url());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgUpdateItemSchema::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgUpdateItemSchema::CopyFrom(const CMsgUpdateItemSchema& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgUpdateItemSchema::IsInitialized() const {

	return true;
}

void CMsgUpdateItemSchema::Swap(CMsgUpdateItemSchema* other) {
	if (other != this) {
		std::swap(items_game_, other->items_game_);
		std::swap(item_schema_version_, other->item_schema_version_);
		std::swap(items_game_url_deprecated2013_, other->items_game_url_deprecated2013_);
		std::swap(items_game_url_, other->items_game_url_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgUpdateItemSchema::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgUpdateItemSchema_descriptor_;
	metadata.reflection = CMsgUpdateItemSchema_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCError::kErrorTextFieldNumber;
#endif  // !_MSC_VER

CMsgGCError::CMsgGCError()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCError::InitAsDefaultInstance() {
}

CMsgGCError::CMsgGCError(const CMsgGCError& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCError::SharedCtor() {
	_cached_size_ = 0;
	error_text_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCError::~CMsgGCError() {
	SharedDtor();
}

void CMsgGCError::SharedDtor() {
	if (error_text_ != &::google::protobuf::internal::kEmptyString) {
		delete error_text_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCError::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCError::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCError_descriptor_;
}

const CMsgGCError& CMsgGCError::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCError* CMsgGCError::default_instance_ = NULL;

CMsgGCError* CMsgGCError::New() const {
	return new CMsgGCError;
}

void CMsgGCError::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_error_text()) {
			if (error_text_ != &::google::protobuf::internal::kEmptyString) {
				error_text_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCError::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string error_text = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_error_text()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->error_text().data(), this->error_text().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCError::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string error_text = 1;
	if (has_error_text()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->error_text().data(), this->error_text().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->error_text(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCError::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string error_text = 1;
	if (has_error_text()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->error_text().data(), this->error_text().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->error_text(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCError::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string error_text = 1;
		if (has_error_text()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->error_text());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCError::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCError* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCError*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCError::MergeFrom(const CMsgGCError& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_error_text()) {
			set_error_text(from.error_text());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCError::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCError::CopyFrom(const CMsgGCError& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCError::IsInitialized() const {

	return true;
}

void CMsgGCError::Swap(CMsgGCError* other) {
	if (other != this) {
		std::swap(error_text_, other->error_text_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCError::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCError_descriptor_;
	metadata.reflection = CMsgGCError_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgRequestInventoryRefresh::CMsgRequestInventoryRefresh()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgRequestInventoryRefresh::InitAsDefaultInstance() {
}

CMsgRequestInventoryRefresh::CMsgRequestInventoryRefresh(const CMsgRequestInventoryRefresh& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgRequestInventoryRefresh::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgRequestInventoryRefresh::~CMsgRequestInventoryRefresh() {
	SharedDtor();
}

void CMsgRequestInventoryRefresh::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgRequestInventoryRefresh::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgRequestInventoryRefresh::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgRequestInventoryRefresh_descriptor_;
}

const CMsgRequestInventoryRefresh& CMsgRequestInventoryRefresh::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgRequestInventoryRefresh* CMsgRequestInventoryRefresh::default_instance_ = NULL;

CMsgRequestInventoryRefresh* CMsgRequestInventoryRefresh::New() const {
	return new CMsgRequestInventoryRefresh;
}

void CMsgRequestInventoryRefresh::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgRequestInventoryRefresh::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgRequestInventoryRefresh::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgRequestInventoryRefresh::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgRequestInventoryRefresh::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgRequestInventoryRefresh::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgRequestInventoryRefresh* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgRequestInventoryRefresh*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgRequestInventoryRefresh::MergeFrom(const CMsgRequestInventoryRefresh& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgRequestInventoryRefresh::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgRequestInventoryRefresh::CopyFrom(const CMsgRequestInventoryRefresh& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgRequestInventoryRefresh::IsInitialized() const {

	return true;
}

void CMsgRequestInventoryRefresh::Swap(CMsgRequestInventoryRefresh* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgRequestInventoryRefresh::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgRequestInventoryRefresh_descriptor_;
	metadata.reflection = CMsgRequestInventoryRefresh_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgConVarValue::kNameFieldNumber;
const int CMsgConVarValue::kValueFieldNumber;
#endif  // !_MSC_VER

CMsgConVarValue::CMsgConVarValue()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgConVarValue::InitAsDefaultInstance() {
}

CMsgConVarValue::CMsgConVarValue(const CMsgConVarValue& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgConVarValue::SharedCtor() {
	_cached_size_ = 0;
	name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	value_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgConVarValue::~CMsgConVarValue() {
	SharedDtor();
}

void CMsgConVarValue::SharedDtor() {
	if (name_ != &::google::protobuf::internal::kEmptyString) {
		delete name_;
	}
	if (value_ != &::google::protobuf::internal::kEmptyString) {
		delete value_;
	}
	if (this != default_instance_) {
	}
}

void CMsgConVarValue::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgConVarValue::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgConVarValue_descriptor_;
}

const CMsgConVarValue& CMsgConVarValue::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgConVarValue* CMsgConVarValue::default_instance_ = NULL;

CMsgConVarValue* CMsgConVarValue::New() const {
	return new CMsgConVarValue;
}

void CMsgConVarValue::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_name()) {
			if (name_ != &::google::protobuf::internal::kEmptyString) {
				name_->clear();
			}
		}
		if (has_value()) {
			if (value_ != &::google::protobuf::internal::kEmptyString) {
				value_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgConVarValue::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string name = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->name().data(), this->name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_value;
			break;
		}

			  // optional string value = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_value:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_value()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->value().data(), this->value().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgConVarValue::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string name = 1;
	if (has_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->name().data(), this->name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->name(), output);
	}

	// optional string value = 2;
	if (has_value()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->value().data(), this->value().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->value(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgConVarValue::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string name = 1;
	if (has_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->name().data(), this->name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->name(), target);
	}

	// optional string value = 2;
	if (has_value()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->value().data(), this->value().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->value(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgConVarValue::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string name = 1;
		if (has_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->name());
		}

		// optional string value = 2;
		if (has_value()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->value());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgConVarValue::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgConVarValue* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgConVarValue*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgConVarValue::MergeFrom(const CMsgConVarValue& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_name()) {
			set_name(from.name());
		}
		if (from.has_value()) {
			set_value(from.value());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgConVarValue::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgConVarValue::CopyFrom(const CMsgConVarValue& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgConVarValue::IsInitialized() const {

	return true;
}

void CMsgConVarValue::Swap(CMsgConVarValue* other) {
	if (other != this) {
		std::swap(name_, other->name_);
		std::swap(value_, other->value_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgConVarValue::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgConVarValue_descriptor_;
	metadata.reflection = CMsgConVarValue_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgReplicateConVars::kConvarsFieldNumber;
#endif  // !_MSC_VER

CMsgReplicateConVars::CMsgReplicateConVars()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgReplicateConVars::InitAsDefaultInstance() {
}

CMsgReplicateConVars::CMsgReplicateConVars(const CMsgReplicateConVars& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgReplicateConVars::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgReplicateConVars::~CMsgReplicateConVars() {
	SharedDtor();
}

void CMsgReplicateConVars::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgReplicateConVars::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgReplicateConVars::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgReplicateConVars_descriptor_;
}

const CMsgReplicateConVars& CMsgReplicateConVars::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgReplicateConVars* CMsgReplicateConVars::default_instance_ = NULL;

CMsgReplicateConVars* CMsgReplicateConVars::New() const {
	return new CMsgReplicateConVars;
}

void CMsgReplicateConVars::Clear() {
	convars_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgReplicateConVars::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// repeated .CMsgConVarValue convars = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_convars:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_convars()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(10)) goto parse_convars;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgReplicateConVars::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// repeated .CMsgConVarValue convars = 1;
	for (int i = 0; i < this->convars_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			1, this->convars(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgReplicateConVars::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// repeated .CMsgConVarValue convars = 1;
	for (int i = 0; i < this->convars_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				1, this->convars(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgReplicateConVars::ByteSize() const {
	int total_size = 0;

	// repeated .CMsgConVarValue convars = 1;
	total_size += 1 * this->convars_size();
	for (int i = 0; i < this->convars_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->convars(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgReplicateConVars::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgReplicateConVars* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgReplicateConVars*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgReplicateConVars::MergeFrom(const CMsgReplicateConVars& from) {
	GOOGLE_CHECK_NE(&from, this);
	convars_.MergeFrom(from.convars_);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgReplicateConVars::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgReplicateConVars::CopyFrom(const CMsgReplicateConVars& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgReplicateConVars::IsInitialized() const {

	return true;
}

void CMsgReplicateConVars::Swap(CMsgReplicateConVars* other) {
	if (other != this) {
		convars_.Swap(&other->convars_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgReplicateConVars::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgReplicateConVars_descriptor_;
	metadata.reflection = CMsgReplicateConVars_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgUseItem::kItemIdFieldNumber;
const int CMsgUseItem::kTargetSteamIdFieldNumber;
const int CMsgUseItem::kGiftPotentialTargetsFieldNumber;
const int CMsgUseItem::kDuelClassLockFieldNumber;
const int CMsgUseItem::kInitiatorSteamIdFieldNumber;
#endif  // !_MSC_VER

CMsgUseItem::CMsgUseItem()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgUseItem::InitAsDefaultInstance() {
}

CMsgUseItem::CMsgUseItem(const CMsgUseItem& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgUseItem::SharedCtor() {
	_cached_size_ = 0;
	item_id_ = GOOGLE_ULONGLONG(0);
	target_steam_id_ = GOOGLE_ULONGLONG(0);
	duel__class_lock_ = 0u;
	initiator_steam_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgUseItem::~CMsgUseItem() {
	SharedDtor();
}

void CMsgUseItem::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgUseItem::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgUseItem::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgUseItem_descriptor_;
}

const CMsgUseItem& CMsgUseItem::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgUseItem* CMsgUseItem::default_instance_ = NULL;

CMsgUseItem* CMsgUseItem::New() const {
	return new CMsgUseItem;
}

void CMsgUseItem::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_id_ = GOOGLE_ULONGLONG(0);
		target_steam_id_ = GOOGLE_ULONGLONG(0);
		duel__class_lock_ = 0u;
		initiator_steam_id_ = GOOGLE_ULONGLONG(0);
	}
	gift__potential_targets_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgUseItem::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(17)) goto parse_target_steam_id;
			break;
		}

			  // optional fixed64 target_steam_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_target_steam_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &target_steam_id_)));
				set_has_target_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_gift__potential_targets;
			break;
		}

			  // repeated uint32 gift__potential_targets = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_gift__potential_targets:
				DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						1, 24, input, this->mutable_gift__potential_targets())));
			}
			else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
				== ::google::protobuf::internal::WireFormatLite::
				WIRETYPE_LENGTH_DELIMITED) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, this->mutable_gift__potential_targets())));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_gift__potential_targets;
			if (input->ExpectTag(32)) goto parse_duel__class_lock;
			break;
		}

			  // optional uint32 duel__class_lock = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_duel__class_lock:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &duel__class_lock_)));
				set_has_duel__class_lock();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(41)) goto parse_initiator_steam_id;
			break;
		}

			  // optional fixed64 initiator_steam_id = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_initiator_steam_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &initiator_steam_id_)));
				set_has_initiator_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgUseItem::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 item_id = 1;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->item_id(), output);
	}

	// optional fixed64 target_steam_id = 2;
	if (has_target_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->target_steam_id(), output);
	}

	// repeated uint32 gift__potential_targets = 3;
	for (int i = 0; i < this->gift__potential_targets_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(
			3, this->gift__potential_targets(i), output);
	}

	// optional uint32 duel__class_lock = 4;
	if (has_duel__class_lock()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->duel__class_lock(), output);
	}

	// optional fixed64 initiator_steam_id = 5;
	if (has_initiator_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(5, this->initiator_steam_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgUseItem::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 item_id = 1;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->item_id(), target);
	}

	// optional fixed64 target_steam_id = 2;
	if (has_target_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->target_steam_id(), target);
	}

	// repeated uint32 gift__potential_targets = 3;
	for (int i = 0; i < this->gift__potential_targets_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteUInt32ToArray(3, this->gift__potential_targets(i), target);
	}

	// optional uint32 duel__class_lock = 4;
	if (has_duel__class_lock()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->duel__class_lock(), target);
	}

	// optional fixed64 initiator_steam_id = 5;
	if (has_initiator_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(5, this->initiator_steam_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgUseItem::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 item_id = 1;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

		// optional fixed64 target_steam_id = 2;
		if (has_target_steam_id()) {
			total_size += 1 + 8;
		}

		// optional uint32 duel__class_lock = 4;
		if (has_duel__class_lock()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->duel__class_lock());
		}

		// optional fixed64 initiator_steam_id = 5;
		if (has_initiator_steam_id()) {
			total_size += 1 + 8;
		}

	}
	// repeated uint32 gift__potential_targets = 3;
	{
		int data_size = 0;
		for (int i = 0; i < this->gift__potential_targets_size(); i++) {
			data_size += ::google::protobuf::internal::WireFormatLite::
				UInt32Size(this->gift__potential_targets(i));
		}
		total_size += 1 * this->gift__potential_targets_size() + data_size;
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgUseItem::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgUseItem* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgUseItem*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgUseItem::MergeFrom(const CMsgUseItem& from) {
	GOOGLE_CHECK_NE(&from, this);
	gift__potential_targets_.MergeFrom(from.gift__potential_targets_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
		if (from.has_target_steam_id()) {
			set_target_steam_id(from.target_steam_id());
		}
		if (from.has_duel__class_lock()) {
			set_duel__class_lock(from.duel__class_lock());
		}
		if (from.has_initiator_steam_id()) {
			set_initiator_steam_id(from.initiator_steam_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgUseItem::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgUseItem::CopyFrom(const CMsgUseItem& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgUseItem::IsInitialized() const {

	return true;
}

void CMsgUseItem::Swap(CMsgUseItem* other) {
	if (other != this) {
		std::swap(item_id_, other->item_id_);
		std::swap(target_steam_id_, other->target_steam_id_);
		gift__potential_targets_.Swap(&other->gift__potential_targets_);
		std::swap(duel__class_lock_, other->duel__class_lock_);
		std::swap(initiator_steam_id_, other->initiator_steam_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgUseItem::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgUseItem_descriptor_;
	metadata.reflection = CMsgUseItem_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgReplayUploadedToYouTube::kYoutubeUrlFieldNumber;
const int CMsgReplayUploadedToYouTube::kYoutubeAccountNameFieldNumber;
const int CMsgReplayUploadedToYouTube::kSessionIdFieldNumber;
#endif  // !_MSC_VER

CMsgReplayUploadedToYouTube::CMsgReplayUploadedToYouTube()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgReplayUploadedToYouTube::InitAsDefaultInstance() {
}

CMsgReplayUploadedToYouTube::CMsgReplayUploadedToYouTube(const CMsgReplayUploadedToYouTube& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgReplayUploadedToYouTube::SharedCtor() {
	_cached_size_ = 0;
	youtube_url_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	youtube_account_name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	session_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgReplayUploadedToYouTube::~CMsgReplayUploadedToYouTube() {
	SharedDtor();
}

void CMsgReplayUploadedToYouTube::SharedDtor() {
	if (youtube_url_ != &::google::protobuf::internal::kEmptyString) {
		delete youtube_url_;
	}
	if (youtube_account_name_ != &::google::protobuf::internal::kEmptyString) {
		delete youtube_account_name_;
	}
	if (this != default_instance_) {
	}
}

void CMsgReplayUploadedToYouTube::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgReplayUploadedToYouTube::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgReplayUploadedToYouTube_descriptor_;
}

const CMsgReplayUploadedToYouTube& CMsgReplayUploadedToYouTube::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgReplayUploadedToYouTube* CMsgReplayUploadedToYouTube::default_instance_ = NULL;

CMsgReplayUploadedToYouTube* CMsgReplayUploadedToYouTube::New() const {
	return new CMsgReplayUploadedToYouTube;
}

void CMsgReplayUploadedToYouTube::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_youtube_url()) {
			if (youtube_url_ != &::google::protobuf::internal::kEmptyString) {
				youtube_url_->clear();
			}
		}
		if (has_youtube_account_name()) {
			if (youtube_account_name_ != &::google::protobuf::internal::kEmptyString) {
				youtube_account_name_->clear();
			}
		}
		session_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgReplayUploadedToYouTube::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string youtube_url = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_youtube_url()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->youtube_url().data(), this->youtube_url().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_youtube_account_name;
			break;
		}

			  // optional string youtube_account_name = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_youtube_account_name:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_youtube_account_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->youtube_account_name().data(), this->youtube_account_name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_session_id;
			break;
		}

			  // optional uint64 session_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_session_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &session_id_)));
				set_has_session_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgReplayUploadedToYouTube::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string youtube_url = 1;
	if (has_youtube_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->youtube_url().data(), this->youtube_url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->youtube_url(), output);
	}

	// optional string youtube_account_name = 2;
	if (has_youtube_account_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->youtube_account_name().data(), this->youtube_account_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->youtube_account_name(), output);
	}

	// optional uint64 session_id = 3;
	if (has_session_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->session_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgReplayUploadedToYouTube::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string youtube_url = 1;
	if (has_youtube_url()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->youtube_url().data(), this->youtube_url().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->youtube_url(), target);
	}

	// optional string youtube_account_name = 2;
	if (has_youtube_account_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->youtube_account_name().data(), this->youtube_account_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->youtube_account_name(), target);
	}

	// optional uint64 session_id = 3;
	if (has_session_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->session_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgReplayUploadedToYouTube::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string youtube_url = 1;
		if (has_youtube_url()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->youtube_url());
		}

		// optional string youtube_account_name = 2;
		if (has_youtube_account_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->youtube_account_name());
		}

		// optional uint64 session_id = 3;
		if (has_session_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->session_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgReplayUploadedToYouTube::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgReplayUploadedToYouTube* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgReplayUploadedToYouTube*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgReplayUploadedToYouTube::MergeFrom(const CMsgReplayUploadedToYouTube& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_youtube_url()) {
			set_youtube_url(from.youtube_url());
		}
		if (from.has_youtube_account_name()) {
			set_youtube_account_name(from.youtube_account_name());
		}
		if (from.has_session_id()) {
			set_session_id(from.session_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgReplayUploadedToYouTube::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgReplayUploadedToYouTube::CopyFrom(const CMsgReplayUploadedToYouTube& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgReplayUploadedToYouTube::IsInitialized() const {

	return true;
}

void CMsgReplayUploadedToYouTube::Swap(CMsgReplayUploadedToYouTube* other) {
	if (other != this) {
		std::swap(youtube_url_, other->youtube_url_);
		std::swap(youtube_account_name_, other->youtube_account_name_);
		std::swap(session_id_, other->session_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgReplayUploadedToYouTube::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgReplayUploadedToYouTube_descriptor_;
	metadata.reflection = CMsgReplayUploadedToYouTube_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgConsumableExhausted::kItemDefIdFieldNumber;
#endif  // !_MSC_VER

CMsgConsumableExhausted::CMsgConsumableExhausted()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgConsumableExhausted::InitAsDefaultInstance() {
}

CMsgConsumableExhausted::CMsgConsumableExhausted(const CMsgConsumableExhausted& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgConsumableExhausted::SharedCtor() {
	_cached_size_ = 0;
	item_def_id_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgConsumableExhausted::~CMsgConsumableExhausted() {
	SharedDtor();
}

void CMsgConsumableExhausted::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgConsumableExhausted::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgConsumableExhausted::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgConsumableExhausted_descriptor_;
}

const CMsgConsumableExhausted& CMsgConsumableExhausted::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgConsumableExhausted* CMsgConsumableExhausted::default_instance_ = NULL;

CMsgConsumableExhausted* CMsgConsumableExhausted::New() const {
	return new CMsgConsumableExhausted;
}

void CMsgConsumableExhausted::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_def_id_ = 0;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgConsumableExhausted::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional int32 item_def_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &item_def_id_)));
				set_has_item_def_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgConsumableExhausted::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional int32 item_def_id = 1;
	if (has_item_def_id()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->item_def_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgConsumableExhausted::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional int32 item_def_id = 1;
	if (has_item_def_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->item_def_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgConsumableExhausted::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional int32 item_def_id = 1;
		if (has_item_def_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->item_def_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgConsumableExhausted::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgConsumableExhausted* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgConsumableExhausted*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgConsumableExhausted::MergeFrom(const CMsgConsumableExhausted& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_def_id()) {
			set_item_def_id(from.item_def_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgConsumableExhausted::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgConsumableExhausted::CopyFrom(const CMsgConsumableExhausted& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgConsumableExhausted::IsInitialized() const {

	return true;
}

void CMsgConsumableExhausted::Swap(CMsgConsumableExhausted* other) {
	if (other != this) {
		std::swap(item_def_id_, other->item_def_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgConsumableExhausted::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgConsumableExhausted_descriptor_;
	metadata.reflection = CMsgConsumableExhausted_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgItemAcknowledged__DEPRECATED::kAccountIdFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kInventoryFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kDefIndexFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kQualityFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kRarityFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kOriginFieldNumber;
const int CMsgItemAcknowledged__DEPRECATED::kItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgItemAcknowledged__DEPRECATED::CMsgItemAcknowledged__DEPRECATED()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgItemAcknowledged__DEPRECATED::InitAsDefaultInstance() {
}

CMsgItemAcknowledged__DEPRECATED::CMsgItemAcknowledged__DEPRECATED(const CMsgItemAcknowledged__DEPRECATED& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgItemAcknowledged__DEPRECATED::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	inventory_ = 0u;
	def_index_ = 0u;
	quality_ = 0u;
	rarity_ = 0u;
	origin_ = 0u;
	item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgItemAcknowledged__DEPRECATED::~CMsgItemAcknowledged__DEPRECATED() {
	SharedDtor();
}

void CMsgItemAcknowledged__DEPRECATED::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgItemAcknowledged__DEPRECATED::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgItemAcknowledged__DEPRECATED::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgItemAcknowledged__DEPRECATED_descriptor_;
}

const CMsgItemAcknowledged__DEPRECATED& CMsgItemAcknowledged__DEPRECATED::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgItemAcknowledged__DEPRECATED* CMsgItemAcknowledged__DEPRECATED::default_instance_ = NULL;

CMsgItemAcknowledged__DEPRECATED* CMsgItemAcknowledged__DEPRECATED::New() const {
	return new CMsgItemAcknowledged__DEPRECATED;
}

void CMsgItemAcknowledged__DEPRECATED::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		inventory_ = 0u;
		def_index_ = 0u;
		quality_ = 0u;
		rarity_ = 0u;
		origin_ = 0u;
		item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgItemAcknowledged__DEPRECATED::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_inventory;
			break;
		}

			  // optional uint32 inventory = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_inventory:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &inventory_)));
				set_has_inventory();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_def_index;
			break;
		}

			  // optional uint32 def_index = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_def_index:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &def_index_)));
				set_has_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_quality;
			break;
		}

			  // optional uint32 quality = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_quality:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &quality_)));
				set_has_quality();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_rarity;
			break;
		}

			  // optional uint32 rarity = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_rarity:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &rarity_)));
				set_has_rarity();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(48)) goto parse_origin;
			break;
		}

			  // optional uint32 origin = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_origin:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &origin_)));
				set_has_origin();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(56)) goto parse_item_id;
			break;
		}

			  // optional uint64 item_id = 7;
		case 7: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgItemAcknowledged__DEPRECATED::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional uint32 inventory = 2;
	if (has_inventory()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->inventory(), output);
	}

	// optional uint32 def_index = 3;
	if (has_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->def_index(), output);
	}

	// optional uint32 quality = 4;
	if (has_quality()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->quality(), output);
	}

	// optional uint32 rarity = 5;
	if (has_rarity()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->rarity(), output);
	}

	// optional uint32 origin = 6;
	if (has_origin()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->origin(), output);
	}

	// optional uint64 item_id = 7;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgItemAcknowledged__DEPRECATED::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional uint32 inventory = 2;
	if (has_inventory()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->inventory(), target);
	}

	// optional uint32 def_index = 3;
	if (has_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->def_index(), target);
	}

	// optional uint32 quality = 4;
	if (has_quality()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->quality(), target);
	}

	// optional uint32 rarity = 5;
	if (has_rarity()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->rarity(), target);
	}

	// optional uint32 origin = 6;
	if (has_origin()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->origin(), target);
	}

	// optional uint64 item_id = 7;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgItemAcknowledged__DEPRECATED::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 inventory = 2;
		if (has_inventory()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->inventory());
		}

		// optional uint32 def_index = 3;
		if (has_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->def_index());
		}

		// optional uint32 quality = 4;
		if (has_quality()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->quality());
		}

		// optional uint32 rarity = 5;
		if (has_rarity()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->rarity());
		}

		// optional uint32 origin = 6;
		if (has_origin()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->origin());
		}

		// optional uint64 item_id = 7;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgItemAcknowledged__DEPRECATED::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgItemAcknowledged__DEPRECATED* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgItemAcknowledged__DEPRECATED*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgItemAcknowledged__DEPRECATED::MergeFrom(const CMsgItemAcknowledged__DEPRECATED& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_inventory()) {
			set_inventory(from.inventory());
		}
		if (from.has_def_index()) {
			set_def_index(from.def_index());
		}
		if (from.has_quality()) {
			set_quality(from.quality());
		}
		if (from.has_rarity()) {
			set_rarity(from.rarity());
		}
		if (from.has_origin()) {
			set_origin(from.origin());
		}
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgItemAcknowledged__DEPRECATED::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgItemAcknowledged__DEPRECATED::CopyFrom(const CMsgItemAcknowledged__DEPRECATED& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgItemAcknowledged__DEPRECATED::IsInitialized() const {

	return true;
}

void CMsgItemAcknowledged__DEPRECATED::Swap(CMsgItemAcknowledged__DEPRECATED* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(inventory_, other->inventory_);
		std::swap(def_index_, other->def_index_);
		std::swap(quality_, other->quality_);
		std::swap(rarity_, other->rarity_);
		std::swap(origin_, other->origin_);
		std::swap(item_id_, other->item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgItemAcknowledged__DEPRECATED::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgItemAcknowledged__DEPRECATED_descriptor_;
	metadata.reflection = CMsgItemAcknowledged__DEPRECATED_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgSetItemPositions_ItemPosition::kLegacyItemIdFieldNumber;
const int CMsgSetItemPositions_ItemPosition::kPositionFieldNumber;
const int CMsgSetItemPositions_ItemPosition::kItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgSetItemPositions_ItemPosition::CMsgSetItemPositions_ItemPosition()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgSetItemPositions_ItemPosition::InitAsDefaultInstance() {
}

CMsgSetItemPositions_ItemPosition::CMsgSetItemPositions_ItemPosition(const CMsgSetItemPositions_ItemPosition& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgSetItemPositions_ItemPosition::SharedCtor() {
	_cached_size_ = 0;
	legacy_item_id_ = 0u;
	position_ = 0u;
	item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgSetItemPositions_ItemPosition::~CMsgSetItemPositions_ItemPosition() {
	SharedDtor();
}

void CMsgSetItemPositions_ItemPosition::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgSetItemPositions_ItemPosition::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgSetItemPositions_ItemPosition::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgSetItemPositions_ItemPosition_descriptor_;
}

const CMsgSetItemPositions_ItemPosition& CMsgSetItemPositions_ItemPosition::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgSetItemPositions_ItemPosition* CMsgSetItemPositions_ItemPosition::default_instance_ = NULL;

CMsgSetItemPositions_ItemPosition* CMsgSetItemPositions_ItemPosition::New() const {
	return new CMsgSetItemPositions_ItemPosition;
}

void CMsgSetItemPositions_ItemPosition::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		legacy_item_id_ = 0u;
		position_ = 0u;
		item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgSetItemPositions_ItemPosition::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 legacy_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &legacy_item_id_)));
				set_has_legacy_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_position;
			break;
		}

			  // optional uint32 position = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_position:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &position_)));
				set_has_position();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_id;
			break;
		}

			  // optional uint64 item_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgSetItemPositions_ItemPosition::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 legacy_item_id = 1;
	if (has_legacy_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->legacy_item_id(), output);
	}

	// optional uint32 position = 2;
	if (has_position()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->position(), output);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgSetItemPositions_ItemPosition::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 legacy_item_id = 1;
	if (has_legacy_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->legacy_item_id(), target);
	}

	// optional uint32 position = 2;
	if (has_position()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->position(), target);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgSetItemPositions_ItemPosition::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 legacy_item_id = 1;
		if (has_legacy_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->legacy_item_id());
		}

		// optional uint32 position = 2;
		if (has_position()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->position());
		}

		// optional uint64 item_id = 3;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgSetItemPositions_ItemPosition::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgSetItemPositions_ItemPosition* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgSetItemPositions_ItemPosition*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgSetItemPositions_ItemPosition::MergeFrom(const CMsgSetItemPositions_ItemPosition& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_legacy_item_id()) {
			set_legacy_item_id(from.legacy_item_id());
		}
		if (from.has_position()) {
			set_position(from.position());
		}
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgSetItemPositions_ItemPosition::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgSetItemPositions_ItemPosition::CopyFrom(const CMsgSetItemPositions_ItemPosition& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgSetItemPositions_ItemPosition::IsInitialized() const {

	return true;
}

void CMsgSetItemPositions_ItemPosition::Swap(CMsgSetItemPositions_ItemPosition* other) {
	if (other != this) {
		std::swap(legacy_item_id_, other->legacy_item_id_);
		std::swap(position_, other->position_);
		std::swap(item_id_, other->item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgSetItemPositions_ItemPosition::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgSetItemPositions_ItemPosition_descriptor_;
	metadata.reflection = CMsgSetItemPositions_ItemPosition_reflection_;
	return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int CMsgSetItemPositions::kItemPositionsFieldNumber;
#endif  // !_MSC_VER

CMsgSetItemPositions::CMsgSetItemPositions()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgSetItemPositions::InitAsDefaultInstance() {
}

CMsgSetItemPositions::CMsgSetItemPositions(const CMsgSetItemPositions& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgSetItemPositions::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgSetItemPositions::~CMsgSetItemPositions() {
	SharedDtor();
}

void CMsgSetItemPositions::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgSetItemPositions::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgSetItemPositions::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgSetItemPositions_descriptor_;
}

const CMsgSetItemPositions& CMsgSetItemPositions::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgSetItemPositions* CMsgSetItemPositions::default_instance_ = NULL;

CMsgSetItemPositions* CMsgSetItemPositions::New() const {
	return new CMsgSetItemPositions;
}

void CMsgSetItemPositions::Clear() {
	item_positions_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgSetItemPositions::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// repeated .CMsgSetItemPositions.ItemPosition item_positions = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_item_positions:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_item_positions()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(10)) goto parse_item_positions;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgSetItemPositions::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// repeated .CMsgSetItemPositions.ItemPosition item_positions = 1;
	for (int i = 0; i < this->item_positions_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			1, this->item_positions(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgSetItemPositions::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// repeated .CMsgSetItemPositions.ItemPosition item_positions = 1;
	for (int i = 0; i < this->item_positions_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				1, this->item_positions(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgSetItemPositions::ByteSize() const {
	int total_size = 0;

	// repeated .CMsgSetItemPositions.ItemPosition item_positions = 1;
	total_size += 1 * this->item_positions_size();
	for (int i = 0; i < this->item_positions_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->item_positions(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgSetItemPositions::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgSetItemPositions* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgSetItemPositions*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgSetItemPositions::MergeFrom(const CMsgSetItemPositions& from) {
	GOOGLE_CHECK_NE(&from, this);
	item_positions_.MergeFrom(from.item_positions_);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgSetItemPositions::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgSetItemPositions::CopyFrom(const CMsgSetItemPositions& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgSetItemPositions::IsInitialized() const {

	return true;
}

void CMsgSetItemPositions::Swap(CMsgSetItemPositions* other) {
	if (other != this) {
		item_positions_.Swap(&other->item_positions_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgSetItemPositions::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgSetItemPositions_descriptor_;
	metadata.reflection = CMsgSetItemPositions_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCReportAbuse::kTargetSteamIdFieldNumber;
const int CMsgGCReportAbuse::kDescriptionFieldNumber;
const int CMsgGCReportAbuse::kGidFieldNumber;
const int CMsgGCReportAbuse::kAbuseTypeFieldNumber;
const int CMsgGCReportAbuse::kContentTypeFieldNumber;
const int CMsgGCReportAbuse::kTargetGameServerIpFieldNumber;
const int CMsgGCReportAbuse::kTargetGameServerPortFieldNumber;
#endif  // !_MSC_VER

CMsgGCReportAbuse::CMsgGCReportAbuse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCReportAbuse::InitAsDefaultInstance() {
}

CMsgGCReportAbuse::CMsgGCReportAbuse(const CMsgGCReportAbuse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCReportAbuse::SharedCtor() {
	_cached_size_ = 0;
	target_steam_id_ = GOOGLE_ULONGLONG(0);
	description_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	gid_ = GOOGLE_ULONGLONG(0);
	abuse_type_ = 0u;
	content_type_ = 0u;
	target_game_server_ip_ = 0u;
	target_game_server_port_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCReportAbuse::~CMsgGCReportAbuse() {
	SharedDtor();
}

void CMsgGCReportAbuse::SharedDtor() {
	if (description_ != &::google::protobuf::internal::kEmptyString) {
		delete description_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCReportAbuse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCReportAbuse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCReportAbuse_descriptor_;
}

const CMsgGCReportAbuse& CMsgGCReportAbuse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCReportAbuse* CMsgGCReportAbuse::default_instance_ = NULL;

CMsgGCReportAbuse* CMsgGCReportAbuse::New() const {
	return new CMsgGCReportAbuse;
}

void CMsgGCReportAbuse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		target_steam_id_ = GOOGLE_ULONGLONG(0);
		if (has_description()) {
			if (description_ != &::google::protobuf::internal::kEmptyString) {
				description_->clear();
			}
		}
		gid_ = GOOGLE_ULONGLONG(0);
		abuse_type_ = 0u;
		content_type_ = 0u;
		target_game_server_ip_ = 0u;
		target_game_server_port_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCReportAbuse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 target_steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &target_steam_id_)));
				set_has_target_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_abuse_type;
			break;
		}

			  // optional uint32 abuse_type = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_abuse_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &abuse_type_)));
				set_has_abuse_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_content_type;
			break;
		}

			  // optional uint32 content_type = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_content_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &content_type_)));
				set_has_content_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_description;
			break;
		}

			  // optional string description = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_description:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_description()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->description().data(), this->description().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_gid;
			break;
		}

			  // optional uint64 gid = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_gid:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &gid_)));
				set_has_gid();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(53)) goto parse_target_game_server_ip;
			break;
		}

			  // optional fixed32 target_game_server_ip = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_target_game_server_ip:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &target_game_server_ip_)));
				set_has_target_game_server_ip();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(56)) goto parse_target_game_server_port;
			break;
		}

			  // optional uint32 target_game_server_port = 7;
		case 7: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_target_game_server_port:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &target_game_server_port_)));
				set_has_target_game_server_port();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCReportAbuse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 target_steam_id = 1;
	if (has_target_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->target_steam_id(), output);
	}

	// optional uint32 abuse_type = 2;
	if (has_abuse_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->abuse_type(), output);
	}

	// optional uint32 content_type = 3;
	if (has_content_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->content_type(), output);
	}

	// optional string description = 4;
	if (has_description()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->description().data(), this->description().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->description(), output);
	}

	// optional uint64 gid = 5;
	if (has_gid()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->gid(), output);
	}

	// optional fixed32 target_game_server_ip = 6;
	if (has_target_game_server_ip()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(6, this->target_game_server_ip(), output);
	}

	// optional uint32 target_game_server_port = 7;
	if (has_target_game_server_port()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->target_game_server_port(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCReportAbuse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 target_steam_id = 1;
	if (has_target_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->target_steam_id(), target);
	}

	// optional uint32 abuse_type = 2;
	if (has_abuse_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->abuse_type(), target);
	}

	// optional uint32 content_type = 3;
	if (has_content_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->content_type(), target);
	}

	// optional string description = 4;
	if (has_description()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->description().data(), this->description().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				4, this->description(), target);
	}

	// optional uint64 gid = 5;
	if (has_gid()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->gid(), target);
	}

	// optional fixed32 target_game_server_ip = 6;
	if (has_target_game_server_ip()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(6, this->target_game_server_ip(), target);
	}

	// optional uint32 target_game_server_port = 7;
	if (has_target_game_server_port()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->target_game_server_port(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCReportAbuse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 target_steam_id = 1;
		if (has_target_steam_id()) {
			total_size += 1 + 8;
		}

		// optional string description = 4;
		if (has_description()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->description());
		}

		// optional uint64 gid = 5;
		if (has_gid()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->gid());
		}

		// optional uint32 abuse_type = 2;
		if (has_abuse_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->abuse_type());
		}

		// optional uint32 content_type = 3;
		if (has_content_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->content_type());
		}

		// optional fixed32 target_game_server_ip = 6;
		if (has_target_game_server_ip()) {
			total_size += 1 + 4;
		}

		// optional uint32 target_game_server_port = 7;
		if (has_target_game_server_port()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->target_game_server_port());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCReportAbuse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCReportAbuse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCReportAbuse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCReportAbuse::MergeFrom(const CMsgGCReportAbuse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_target_steam_id()) {
			set_target_steam_id(from.target_steam_id());
		}
		if (from.has_description()) {
			set_description(from.description());
		}
		if (from.has_gid()) {
			set_gid(from.gid());
		}
		if (from.has_abuse_type()) {
			set_abuse_type(from.abuse_type());
		}
		if (from.has_content_type()) {
			set_content_type(from.content_type());
		}
		if (from.has_target_game_server_ip()) {
			set_target_game_server_ip(from.target_game_server_ip());
		}
		if (from.has_target_game_server_port()) {
			set_target_game_server_port(from.target_game_server_port());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCReportAbuse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCReportAbuse::CopyFrom(const CMsgGCReportAbuse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCReportAbuse::IsInitialized() const {

	return true;
}

void CMsgGCReportAbuse::Swap(CMsgGCReportAbuse* other) {
	if (other != this) {
		std::swap(target_steam_id_, other->target_steam_id_);
		std::swap(description_, other->description_);
		std::swap(gid_, other->gid_);
		std::swap(abuse_type_, other->abuse_type_);
		std::swap(content_type_, other->content_type_);
		std::swap(target_game_server_ip_, other->target_game_server_ip_);
		std::swap(target_game_server_port_, other->target_game_server_port_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCReportAbuse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCReportAbuse_descriptor_;
	metadata.reflection = CMsgGCReportAbuse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCReportAbuseResponse::kTargetSteamIdFieldNumber;
const int CMsgGCReportAbuseResponse::kResultFieldNumber;
const int CMsgGCReportAbuseResponse::kErrorMessageFieldNumber;
#endif  // !_MSC_VER

CMsgGCReportAbuseResponse::CMsgGCReportAbuseResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCReportAbuseResponse::InitAsDefaultInstance() {
}

CMsgGCReportAbuseResponse::CMsgGCReportAbuseResponse(const CMsgGCReportAbuseResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCReportAbuseResponse::SharedCtor() {
	_cached_size_ = 0;
	target_steam_id_ = GOOGLE_ULONGLONG(0);
	result_ = 0u;
	error_message_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCReportAbuseResponse::~CMsgGCReportAbuseResponse() {
	SharedDtor();
}

void CMsgGCReportAbuseResponse::SharedDtor() {
	if (error_message_ != &::google::protobuf::internal::kEmptyString) {
		delete error_message_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCReportAbuseResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCReportAbuseResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCReportAbuseResponse_descriptor_;
}

const CMsgGCReportAbuseResponse& CMsgGCReportAbuseResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCReportAbuseResponse* CMsgGCReportAbuseResponse::default_instance_ = NULL;

CMsgGCReportAbuseResponse* CMsgGCReportAbuseResponse::New() const {
	return new CMsgGCReportAbuseResponse;
}

void CMsgGCReportAbuseResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		target_steam_id_ = GOOGLE_ULONGLONG(0);
		result_ = 0u;
		if (has_error_message()) {
			if (error_message_ != &::google::protobuf::internal::kEmptyString) {
				error_message_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCReportAbuseResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 target_steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &target_steam_id_)));
				set_has_target_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_result;
			break;
		}

			  // optional uint32 result = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_result:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &result_)));
				set_has_result();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_error_message;
			break;
		}

			  // optional string error_message = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_error_message:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_error_message()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->error_message().data(), this->error_message().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCReportAbuseResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 target_steam_id = 1;
	if (has_target_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->target_steam_id(), output);
	}

	// optional uint32 result = 2;
	if (has_result()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->result(), output);
	}

	// optional string error_message = 3;
	if (has_error_message()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->error_message().data(), this->error_message().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->error_message(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCReportAbuseResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 target_steam_id = 1;
	if (has_target_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->target_steam_id(), target);
	}

	// optional uint32 result = 2;
	if (has_result()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->result(), target);
	}

	// optional string error_message = 3;
	if (has_error_message()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->error_message().data(), this->error_message().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->error_message(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCReportAbuseResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 target_steam_id = 1;
		if (has_target_steam_id()) {
			total_size += 1 + 8;
		}

		// optional uint32 result = 2;
		if (has_result()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->result());
		}

		// optional string error_message = 3;
		if (has_error_message()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->error_message());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCReportAbuseResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCReportAbuseResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCReportAbuseResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCReportAbuseResponse::MergeFrom(const CMsgGCReportAbuseResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_target_steam_id()) {
			set_target_steam_id(from.target_steam_id());
		}
		if (from.has_result()) {
			set_result(from.result());
		}
		if (from.has_error_message()) {
			set_error_message(from.error_message());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCReportAbuseResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCReportAbuseResponse::CopyFrom(const CMsgGCReportAbuseResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCReportAbuseResponse::IsInitialized() const {

	return true;
}

void CMsgGCReportAbuseResponse::Swap(CMsgGCReportAbuseResponse* other) {
	if (other != this) {
		std::swap(target_steam_id_, other->target_steam_id_);
		std::swap(result_, other->result_);
		std::swap(error_message_, other->error_message_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCReportAbuseResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCReportAbuseResponse_descriptor_;
	metadata.reflection = CMsgGCReportAbuseResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCNameItemNotification::kPlayerSteamidFieldNumber;
const int CMsgGCNameItemNotification::kItemDefIndexFieldNumber;
const int CMsgGCNameItemNotification::kItemNameCustomFieldNumber;
#endif  // !_MSC_VER

CMsgGCNameItemNotification::CMsgGCNameItemNotification()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCNameItemNotification::InitAsDefaultInstance() {
}

CMsgGCNameItemNotification::CMsgGCNameItemNotification(const CMsgGCNameItemNotification& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCNameItemNotification::SharedCtor() {
	_cached_size_ = 0;
	player_steamid_ = GOOGLE_ULONGLONG(0);
	item_def_index_ = 0u;
	item_name_custom_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCNameItemNotification::~CMsgGCNameItemNotification() {
	SharedDtor();
}

void CMsgGCNameItemNotification::SharedDtor() {
	if (item_name_custom_ != &::google::protobuf::internal::kEmptyString) {
		delete item_name_custom_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCNameItemNotification::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCNameItemNotification::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCNameItemNotification_descriptor_;
}

const CMsgGCNameItemNotification& CMsgGCNameItemNotification::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCNameItemNotification* CMsgGCNameItemNotification::default_instance_ = NULL;

CMsgGCNameItemNotification* CMsgGCNameItemNotification::New() const {
	return new CMsgGCNameItemNotification;
}

void CMsgGCNameItemNotification::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		player_steamid_ = GOOGLE_ULONGLONG(0);
		item_def_index_ = 0u;
		if (has_item_name_custom()) {
			if (item_name_custom_ != &::google::protobuf::internal::kEmptyString) {
				item_name_custom_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCNameItemNotification::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 player_steamid = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &player_steamid_)));
				set_has_player_steamid();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_def_index;
			break;
		}

			  // optional uint32 item_def_index = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_def_index:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_def_index_)));
				set_has_item_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_item_name_custom;
			break;
		}

			  // optional string item_name_custom = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_item_name_custom:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_item_name_custom()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->item_name_custom().data(), this->item_name_custom().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCNameItemNotification::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 player_steamid = 1;
	if (has_player_steamid()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->player_steamid(), output);
	}

	// optional uint32 item_def_index = 2;
	if (has_item_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->item_def_index(), output);
	}

	// optional string item_name_custom = 3;
	if (has_item_name_custom()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->item_name_custom().data(), this->item_name_custom().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->item_name_custom(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCNameItemNotification::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 player_steamid = 1;
	if (has_player_steamid()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->player_steamid(), target);
	}

	// optional uint32 item_def_index = 2;
	if (has_item_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->item_def_index(), target);
	}

	// optional string item_name_custom = 3;
	if (has_item_name_custom()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->item_name_custom().data(), this->item_name_custom().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->item_name_custom(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCNameItemNotification::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 player_steamid = 1;
		if (has_player_steamid()) {
			total_size += 1 + 8;
		}

		// optional uint32 item_def_index = 2;
		if (has_item_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_def_index());
		}

		// optional string item_name_custom = 3;
		if (has_item_name_custom()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->item_name_custom());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCNameItemNotification::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCNameItemNotification* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCNameItemNotification*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCNameItemNotification::MergeFrom(const CMsgGCNameItemNotification& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_player_steamid()) {
			set_player_steamid(from.player_steamid());
		}
		if (from.has_item_def_index()) {
			set_item_def_index(from.item_def_index());
		}
		if (from.has_item_name_custom()) {
			set_item_name_custom(from.item_name_custom());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCNameItemNotification::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCNameItemNotification::CopyFrom(const CMsgGCNameItemNotification& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCNameItemNotification::IsInitialized() const {

	return true;
}

void CMsgGCNameItemNotification::Swap(CMsgGCNameItemNotification* other) {
	if (other != this) {
		std::swap(player_steamid_, other->player_steamid_);
		std::swap(item_def_index_, other->item_def_index_);
		std::swap(item_name_custom_, other->item_name_custom_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCNameItemNotification::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCNameItemNotification_descriptor_;
	metadata.reflection = CMsgGCNameItemNotification_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCClientDisplayNotification::kNotificationTitleLocalizationKeyFieldNumber;
const int CMsgGCClientDisplayNotification::kNotificationBodyLocalizationKeyFieldNumber;
const int CMsgGCClientDisplayNotification::kBodySubstringKeysFieldNumber;
const int CMsgGCClientDisplayNotification::kBodySubstringValuesFieldNumber;
#endif  // !_MSC_VER

CMsgGCClientDisplayNotification::CMsgGCClientDisplayNotification()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCClientDisplayNotification::InitAsDefaultInstance() {
}

CMsgGCClientDisplayNotification::CMsgGCClientDisplayNotification(const CMsgGCClientDisplayNotification& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCClientDisplayNotification::SharedCtor() {
	_cached_size_ = 0;
	notification_title_localization_key_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	notification_body_localization_key_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCClientDisplayNotification::~CMsgGCClientDisplayNotification() {
	SharedDtor();
}

void CMsgGCClientDisplayNotification::SharedDtor() {
	if (notification_title_localization_key_ != &::google::protobuf::internal::kEmptyString) {
		delete notification_title_localization_key_;
	}
	if (notification_body_localization_key_ != &::google::protobuf::internal::kEmptyString) {
		delete notification_body_localization_key_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCClientDisplayNotification::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCClientDisplayNotification::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCClientDisplayNotification_descriptor_;
}

const CMsgGCClientDisplayNotification& CMsgGCClientDisplayNotification::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCClientDisplayNotification* CMsgGCClientDisplayNotification::default_instance_ = NULL;

CMsgGCClientDisplayNotification* CMsgGCClientDisplayNotification::New() const {
	return new CMsgGCClientDisplayNotification;
}

void CMsgGCClientDisplayNotification::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_notification_title_localization_key()) {
			if (notification_title_localization_key_ != &::google::protobuf::internal::kEmptyString) {
				notification_title_localization_key_->clear();
			}
		}
		if (has_notification_body_localization_key()) {
			if (notification_body_localization_key_ != &::google::protobuf::internal::kEmptyString) {
				notification_body_localization_key_->clear();
			}
		}
	}
	body_substring_keys_.Clear();
	body_substring_values_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCClientDisplayNotification::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string notification_title_localization_key = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_notification_title_localization_key()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->notification_title_localization_key().data(), this->notification_title_localization_key().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_notification_body_localization_key;
			break;
		}

			  // optional string notification_body_localization_key = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_notification_body_localization_key:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_notification_body_localization_key()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->notification_body_localization_key().data(), this->notification_body_localization_key().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_body_substring_keys;
			break;
		}

			  // repeated string body_substring_keys = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_body_substring_keys:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->add_body_substring_keys()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->body_substring_keys(this->body_substring_keys_size() - 1).data(),
					this->body_substring_keys(this->body_substring_keys_size() - 1).length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_body_substring_keys;
			if (input->ExpectTag(34)) goto parse_body_substring_values;
			break;
		}

			  // repeated string body_substring_values = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_body_substring_values:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->add_body_substring_values()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->body_substring_values(this->body_substring_values_size() - 1).data(),
					this->body_substring_values(this->body_substring_values_size() - 1).length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_body_substring_values;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCClientDisplayNotification::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string notification_title_localization_key = 1;
	if (has_notification_title_localization_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->notification_title_localization_key().data(), this->notification_title_localization_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->notification_title_localization_key(), output);
	}

	// optional string notification_body_localization_key = 2;
	if (has_notification_body_localization_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->notification_body_localization_key().data(), this->notification_body_localization_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->notification_body_localization_key(), output);
	}

	// repeated string body_substring_keys = 3;
	for (int i = 0; i < this->body_substring_keys_size(); i++) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->body_substring_keys(i).data(), this->body_substring_keys(i).length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->body_substring_keys(i), output);
	}

	// repeated string body_substring_values = 4;
	for (int i = 0; i < this->body_substring_values_size(); i++) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->body_substring_values(i).data(), this->body_substring_values(i).length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->body_substring_values(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCClientDisplayNotification::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string notification_title_localization_key = 1;
	if (has_notification_title_localization_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->notification_title_localization_key().data(), this->notification_title_localization_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->notification_title_localization_key(), target);
	}

	// optional string notification_body_localization_key = 2;
	if (has_notification_body_localization_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->notification_body_localization_key().data(), this->notification_body_localization_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->notification_body_localization_key(), target);
	}

	// repeated string body_substring_keys = 3;
	for (int i = 0; i < this->body_substring_keys_size(); i++) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->body_substring_keys(i).data(), this->body_substring_keys(i).length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target = ::google::protobuf::internal::WireFormatLite::
			WriteStringToArray(3, this->body_substring_keys(i), target);
	}

	// repeated string body_substring_values = 4;
	for (int i = 0; i < this->body_substring_values_size(); i++) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->body_substring_values(i).data(), this->body_substring_values(i).length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target = ::google::protobuf::internal::WireFormatLite::
			WriteStringToArray(4, this->body_substring_values(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCClientDisplayNotification::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string notification_title_localization_key = 1;
		if (has_notification_title_localization_key()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->notification_title_localization_key());
		}

		// optional string notification_body_localization_key = 2;
		if (has_notification_body_localization_key()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->notification_body_localization_key());
		}

	}
	// repeated string body_substring_keys = 3;
	total_size += 1 * this->body_substring_keys_size();
	for (int i = 0; i < this->body_substring_keys_size(); i++) {
		total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
			this->body_substring_keys(i));
	}

	// repeated string body_substring_values = 4;
	total_size += 1 * this->body_substring_values_size();
	for (int i = 0; i < this->body_substring_values_size(); i++) {
		total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
			this->body_substring_values(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCClientDisplayNotification::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCClientDisplayNotification* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCClientDisplayNotification*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCClientDisplayNotification::MergeFrom(const CMsgGCClientDisplayNotification& from) {
	GOOGLE_CHECK_NE(&from, this);
	body_substring_keys_.MergeFrom(from.body_substring_keys_);
	body_substring_values_.MergeFrom(from.body_substring_values_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_notification_title_localization_key()) {
			set_notification_title_localization_key(from.notification_title_localization_key());
		}
		if (from.has_notification_body_localization_key()) {
			set_notification_body_localization_key(from.notification_body_localization_key());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCClientDisplayNotification::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCClientDisplayNotification::CopyFrom(const CMsgGCClientDisplayNotification& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCClientDisplayNotification::IsInitialized() const {

	return true;
}

void CMsgGCClientDisplayNotification::Swap(CMsgGCClientDisplayNotification* other) {
	if (other != this) {
		std::swap(notification_title_localization_key_, other->notification_title_localization_key_);
		std::swap(notification_body_localization_key_, other->notification_body_localization_key_);
		body_substring_keys_.Swap(&other->body_substring_keys_);
		body_substring_values_.Swap(&other->body_substring_values_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCClientDisplayNotification::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCClientDisplayNotification_descriptor_;
	metadata.reflection = CMsgGCClientDisplayNotification_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCShowItemsPickedUp::kPlayerSteamidFieldNumber;
#endif  // !_MSC_VER

CMsgGCShowItemsPickedUp::CMsgGCShowItemsPickedUp()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCShowItemsPickedUp::InitAsDefaultInstance() {
}

CMsgGCShowItemsPickedUp::CMsgGCShowItemsPickedUp(const CMsgGCShowItemsPickedUp& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCShowItemsPickedUp::SharedCtor() {
	_cached_size_ = 0;
	player_steamid_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCShowItemsPickedUp::~CMsgGCShowItemsPickedUp() {
	SharedDtor();
}

void CMsgGCShowItemsPickedUp::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCShowItemsPickedUp::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCShowItemsPickedUp::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCShowItemsPickedUp_descriptor_;
}

const CMsgGCShowItemsPickedUp& CMsgGCShowItemsPickedUp::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCShowItemsPickedUp* CMsgGCShowItemsPickedUp::default_instance_ = NULL;

CMsgGCShowItemsPickedUp* CMsgGCShowItemsPickedUp::New() const {
	return new CMsgGCShowItemsPickedUp;
}

void CMsgGCShowItemsPickedUp::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		player_steamid_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCShowItemsPickedUp::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 player_steamid = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &player_steamid_)));
				set_has_player_steamid();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCShowItemsPickedUp::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 player_steamid = 1;
	if (has_player_steamid()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->player_steamid(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCShowItemsPickedUp::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 player_steamid = 1;
	if (has_player_steamid()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->player_steamid(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCShowItemsPickedUp::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 player_steamid = 1;
		if (has_player_steamid()) {
			total_size += 1 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCShowItemsPickedUp::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCShowItemsPickedUp* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCShowItemsPickedUp*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCShowItemsPickedUp::MergeFrom(const CMsgGCShowItemsPickedUp& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_player_steamid()) {
			set_player_steamid(from.player_steamid());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCShowItemsPickedUp::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCShowItemsPickedUp::CopyFrom(const CMsgGCShowItemsPickedUp& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCShowItemsPickedUp::IsInitialized() const {

	return true;
}

void CMsgGCShowItemsPickedUp::Swap(CMsgGCShowItemsPickedUp* other) {
	if (other != this) {
		std::swap(player_steamid_, other->player_steamid_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCShowItemsPickedUp::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCShowItemsPickedUp_descriptor_;
	metadata.reflection = CMsgGCShowItemsPickedUp_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCIncrementKillCountResponse::kKillerAccountIdFieldNumber;
const int CMsgGCIncrementKillCountResponse::kNumKillsFieldNumber;
const int CMsgGCIncrementKillCountResponse::kItemDefFieldNumber;
const int CMsgGCIncrementKillCountResponse::kLevelTypeFieldNumber;
#endif  // !_MSC_VER

CMsgGCIncrementKillCountResponse::CMsgGCIncrementKillCountResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCIncrementKillCountResponse::InitAsDefaultInstance() {
}

CMsgGCIncrementKillCountResponse::CMsgGCIncrementKillCountResponse(const CMsgGCIncrementKillCountResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCIncrementKillCountResponse::SharedCtor() {
	_cached_size_ = 0;
	killer_account_id_ = 0u;
	num_kills_ = 0u;
	item_def_ = 0u;
	level_type_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCIncrementKillCountResponse::~CMsgGCIncrementKillCountResponse() {
	SharedDtor();
}

void CMsgGCIncrementKillCountResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCIncrementKillCountResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCIncrementKillCountResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCIncrementKillCountResponse_descriptor_;
}

const CMsgGCIncrementKillCountResponse& CMsgGCIncrementKillCountResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCIncrementKillCountResponse* CMsgGCIncrementKillCountResponse::default_instance_ = NULL;

CMsgGCIncrementKillCountResponse* CMsgGCIncrementKillCountResponse::New() const {
	return new CMsgGCIncrementKillCountResponse;
}

void CMsgGCIncrementKillCountResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		killer_account_id_ = 0u;
		num_kills_ = 0u;
		item_def_ = 0u;
		level_type_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCIncrementKillCountResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 killer_account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &killer_account_id_)));
				set_has_killer_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_num_kills;
			break;
		}

			  // optional uint32 num_kills = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_num_kills:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &num_kills_)));
				set_has_num_kills();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_def;
			break;
		}

			  // optional uint32 item_def = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_def:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_def_)));
				set_has_item_def();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_level_type;
			break;
		}

			  // optional uint32 level_type = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_level_type:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &level_type_)));
				set_has_level_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCIncrementKillCountResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 killer_account_id = 1;
	if (has_killer_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->killer_account_id(), output);
	}

	// optional uint32 num_kills = 2;
	if (has_num_kills()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->num_kills(), output);
	}

	// optional uint32 item_def = 3;
	if (has_item_def()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->item_def(), output);
	}

	// optional uint32 level_type = 4;
	if (has_level_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->level_type(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCIncrementKillCountResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 killer_account_id = 1;
	if (has_killer_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->killer_account_id(), target);
	}

	// optional uint32 num_kills = 2;
	if (has_num_kills()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->num_kills(), target);
	}

	// optional uint32 item_def = 3;
	if (has_item_def()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->item_def(), target);
	}

	// optional uint32 level_type = 4;
	if (has_level_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->level_type(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCIncrementKillCountResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 killer_account_id = 1;
		if (has_killer_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->killer_account_id());
		}

		// optional uint32 num_kills = 2;
		if (has_num_kills()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->num_kills());
		}

		// optional uint32 item_def = 3;
		if (has_item_def()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_def());
		}

		// optional uint32 level_type = 4;
		if (has_level_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->level_type());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCIncrementKillCountResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCIncrementKillCountResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCIncrementKillCountResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCIncrementKillCountResponse::MergeFrom(const CMsgGCIncrementKillCountResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_killer_account_id()) {
			set_killer_account_id(from.killer_account_id());
		}
		if (from.has_num_kills()) {
			set_num_kills(from.num_kills());
		}
		if (from.has_item_def()) {
			set_item_def(from.item_def());
		}
		if (from.has_level_type()) {
			set_level_type(from.level_type());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCIncrementKillCountResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCIncrementKillCountResponse::CopyFrom(const CMsgGCIncrementKillCountResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCIncrementKillCountResponse::IsInitialized() const {

	return true;
}

void CMsgGCIncrementKillCountResponse::Swap(CMsgGCIncrementKillCountResponse* other) {
	if (other != this) {
		std::swap(killer_account_id_, other->killer_account_id_);
		std::swap(num_kills_, other->num_kills_);
		std::swap(item_def_, other->item_def_);
		std::swap(level_type_, other->level_type_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCIncrementKillCountResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCIncrementKillCountResponse_descriptor_;
	metadata.reflection = CMsgGCIncrementKillCountResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItemDropRateBonus::kAccountIdFieldNumber;
const int CSOEconItemDropRateBonus::kExpirationDateFieldNumber;
const int CSOEconItemDropRateBonus::kBonusFieldNumber;
const int CSOEconItemDropRateBonus::kBonusCountFieldNumber;
const int CSOEconItemDropRateBonus::kItemIdFieldNumber;
const int CSOEconItemDropRateBonus::kDefIndexFieldNumber;
#endif  // !_MSC_VER

CSOEconItemDropRateBonus::CSOEconItemDropRateBonus()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItemDropRateBonus::InitAsDefaultInstance() {
}

CSOEconItemDropRateBonus::CSOEconItemDropRateBonus(const CSOEconItemDropRateBonus& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItemDropRateBonus::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	expiration_date_ = 0u;
	bonus_ = 0;
	bonus_count_ = 0u;
	item_id_ = GOOGLE_ULONGLONG(0);
	def_index_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus() {
	SharedDtor();
}

void CSOEconItemDropRateBonus::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconItemDropRateBonus::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItemDropRateBonus::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItemDropRateBonus_descriptor_;
}

const CSOEconItemDropRateBonus& CSOEconItemDropRateBonus::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItemDropRateBonus* CSOEconItemDropRateBonus::default_instance_ = NULL;

CSOEconItemDropRateBonus* CSOEconItemDropRateBonus::New() const {
	return new CSOEconItemDropRateBonus;
}

void CSOEconItemDropRateBonus::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		expiration_date_ = 0u;
		bonus_ = 0;
		bonus_count_ = 0u;
		item_id_ = GOOGLE_ULONGLONG(0);
		def_index_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItemDropRateBonus::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(21)) goto parse_expiration_date;
			break;
		}

			  // optional fixed32 expiration_date = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_expiration_date:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &expiration_date_)));
				set_has_expiration_date();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(29)) goto parse_bonus;
			break;
		}

			  // optional float bonus = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_bonus:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &bonus_)));
				set_has_bonus();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_bonus_count;
			break;
		}

			  // optional uint32 bonus_count = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_bonus_count:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &bonus_count_)));
				set_has_bonus_count();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(40)) goto parse_item_id;
			break;
		}

			  // optional uint64 item_id = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(48)) goto parse_def_index;
			break;
		}

			  // optional uint32 def_index = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_def_index:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &def_index_)));
				set_has_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItemDropRateBonus::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional fixed32 expiration_date = 2;
	if (has_expiration_date()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->expiration_date(), output);
	}

	// optional float bonus = 3;
	if (has_bonus()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->bonus(), output);
	}

	// optional uint32 bonus_count = 4;
	if (has_bonus_count()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->bonus_count(), output);
	}

	// optional uint64 item_id = 5;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->item_id(), output);
	}

	// optional uint32 def_index = 6;
	if (has_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->def_index(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItemDropRateBonus::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional fixed32 expiration_date = 2;
	if (has_expiration_date()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->expiration_date(), target);
	}

	// optional float bonus = 3;
	if (has_bonus()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->bonus(), target);
	}

	// optional uint32 bonus_count = 4;
	if (has_bonus_count()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->bonus_count(), target);
	}

	// optional uint64 item_id = 5;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->item_id(), target);
	}

	// optional uint32 def_index = 6;
	if (has_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->def_index(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItemDropRateBonus::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional fixed32 expiration_date = 2;
		if (has_expiration_date()) {
			total_size += 1 + 4;
		}

		// optional float bonus = 3;
		if (has_bonus()) {
			total_size += 1 + 4;
		}

		// optional uint32 bonus_count = 4;
		if (has_bonus_count()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->bonus_count());
		}

		// optional uint64 item_id = 5;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

		// optional uint32 def_index = 6;
		if (has_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->def_index());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItemDropRateBonus::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItemDropRateBonus* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItemDropRateBonus*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItemDropRateBonus::MergeFrom(const CSOEconItemDropRateBonus& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_expiration_date()) {
			set_expiration_date(from.expiration_date());
		}
		if (from.has_bonus()) {
			set_bonus(from.bonus());
		}
		if (from.has_bonus_count()) {
			set_bonus_count(from.bonus_count());
		}
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
		if (from.has_def_index()) {
			set_def_index(from.def_index());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItemDropRateBonus::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItemDropRateBonus::CopyFrom(const CSOEconItemDropRateBonus& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItemDropRateBonus::IsInitialized() const {

	return true;
}

void CSOEconItemDropRateBonus::Swap(CSOEconItemDropRateBonus* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(expiration_date_, other->expiration_date_);
		std::swap(bonus_, other->bonus_);
		std::swap(bonus_count_, other->bonus_count_);
		std::swap(item_id_, other->item_id_);
		std::swap(def_index_, other->def_index_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItemDropRateBonus::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItemDropRateBonus_descriptor_;
	metadata.reflection = CSOEconItemDropRateBonus_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItemLeagueViewPass::kAccountIdFieldNumber;
const int CSOEconItemLeagueViewPass::kLeagueIdFieldNumber;
const int CSOEconItemLeagueViewPass::kAdminFieldNumber;
const int CSOEconItemLeagueViewPass::kItemindexFieldNumber;
#endif  // !_MSC_VER

CSOEconItemLeagueViewPass::CSOEconItemLeagueViewPass()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItemLeagueViewPass::InitAsDefaultInstance() {
}

CSOEconItemLeagueViewPass::CSOEconItemLeagueViewPass(const CSOEconItemLeagueViewPass& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItemLeagueViewPass::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	league_id_ = 0u;
	admin_ = 0u;
	itemindex_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass() {
	SharedDtor();
}

void CSOEconItemLeagueViewPass::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconItemLeagueViewPass::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItemLeagueViewPass::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItemLeagueViewPass_descriptor_;
}

const CSOEconItemLeagueViewPass& CSOEconItemLeagueViewPass::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItemLeagueViewPass* CSOEconItemLeagueViewPass::default_instance_ = NULL;

CSOEconItemLeagueViewPass* CSOEconItemLeagueViewPass::New() const {
	return new CSOEconItemLeagueViewPass;
}

void CSOEconItemLeagueViewPass::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		league_id_ = 0u;
		admin_ = 0u;
		itemindex_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItemLeagueViewPass::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_league_id;
			break;
		}

			  // optional uint32 league_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_league_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &league_id_)));
				set_has_league_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_admin;
			break;
		}

			  // optional uint32 admin = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_admin:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &admin_)));
				set_has_admin();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_itemindex;
			break;
		}

			  // optional uint32 itemindex = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_itemindex:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &itemindex_)));
				set_has_itemindex();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItemLeagueViewPass::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional uint32 league_id = 2;
	if (has_league_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->league_id(), output);
	}

	// optional uint32 admin = 3;
	if (has_admin()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->admin(), output);
	}

	// optional uint32 itemindex = 4;
	if (has_itemindex()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->itemindex(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItemLeagueViewPass::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional uint32 league_id = 2;
	if (has_league_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->league_id(), target);
	}

	// optional uint32 admin = 3;
	if (has_admin()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->admin(), target);
	}

	// optional uint32 itemindex = 4;
	if (has_itemindex()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->itemindex(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItemLeagueViewPass::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 league_id = 2;
		if (has_league_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->league_id());
		}

		// optional uint32 admin = 3;
		if (has_admin()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->admin());
		}

		// optional uint32 itemindex = 4;
		if (has_itemindex()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->itemindex());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItemLeagueViewPass::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItemLeagueViewPass* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItemLeagueViewPass*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItemLeagueViewPass::MergeFrom(const CSOEconItemLeagueViewPass& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_league_id()) {
			set_league_id(from.league_id());
		}
		if (from.has_admin()) {
			set_admin(from.admin());
		}
		if (from.has_itemindex()) {
			set_itemindex(from.itemindex());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItemLeagueViewPass::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItemLeagueViewPass::CopyFrom(const CSOEconItemLeagueViewPass& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItemLeagueViewPass::IsInitialized() const {

	return true;
}

void CSOEconItemLeagueViewPass::Swap(CSOEconItemLeagueViewPass* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(league_id_, other->league_id_);
		std::swap(admin_, other->admin_);
		std::swap(itemindex_, other->itemindex_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItemLeagueViewPass::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItemLeagueViewPass_descriptor_;
	metadata.reflection = CSOEconItemLeagueViewPass_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconItemEventTicket::kAccountIdFieldNumber;
const int CSOEconItemEventTicket::kEventIdFieldNumber;
const int CSOEconItemEventTicket::kItemIdFieldNumber;
#endif  // !_MSC_VER

CSOEconItemEventTicket::CSOEconItemEventTicket()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconItemEventTicket::InitAsDefaultInstance() {
}

CSOEconItemEventTicket::CSOEconItemEventTicket(const CSOEconItemEventTicket& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconItemEventTicket::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	event_id_ = 0u;
	item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconItemEventTicket::~CSOEconItemEventTicket() {
	SharedDtor();
}

void CSOEconItemEventTicket::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconItemEventTicket::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconItemEventTicket::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconItemEventTicket_descriptor_;
}

const CSOEconItemEventTicket& CSOEconItemEventTicket::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconItemEventTicket* CSOEconItemEventTicket::default_instance_ = NULL;

CSOEconItemEventTicket* CSOEconItemEventTicket::New() const {
	return new CSOEconItemEventTicket;
}

void CSOEconItemEventTicket::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		event_id_ = 0u;
		item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconItemEventTicket::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_event_id;
			break;
		}

			  // optional uint32 event_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_event_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &event_id_)));
				set_has_event_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_item_id;
			break;
		}

			  // optional uint64 item_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &item_id_)));
				set_has_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconItemEventTicket::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional uint32 event_id = 2;
	if (has_event_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->event_id(), output);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconItemEventTicket::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional uint32 event_id = 2;
	if (has_event_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->event_id(), target);
	}

	// optional uint64 item_id = 3;
	if (has_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconItemEventTicket::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 event_id = 2;
		if (has_event_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->event_id());
		}

		// optional uint64 item_id = 3;
		if (has_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconItemEventTicket::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconItemEventTicket* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconItemEventTicket*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconItemEventTicket::MergeFrom(const CSOEconItemEventTicket& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_event_id()) {
			set_event_id(from.event_id());
		}
		if (from.has_item_id()) {
			set_item_id(from.item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconItemEventTicket::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconItemEventTicket::CopyFrom(const CSOEconItemEventTicket& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconItemEventTicket::IsInitialized() const {

	return true;
}

void CSOEconItemEventTicket::Swap(CSOEconItemEventTicket* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(event_id_, other->event_id_);
		std::swap(item_id_, other->item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconItemEventTicket::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconItemEventTicket_descriptor_;
	metadata.reflection = CSOEconItemEventTicket_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCItemPreviewItemBoughtNotification::kItemDefIndexFieldNumber;
#endif  // !_MSC_VER

CMsgGCItemPreviewItemBoughtNotification::CMsgGCItemPreviewItemBoughtNotification()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCItemPreviewItemBoughtNotification::InitAsDefaultInstance() {
}

CMsgGCItemPreviewItemBoughtNotification::CMsgGCItemPreviewItemBoughtNotification(const CMsgGCItemPreviewItemBoughtNotification& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCItemPreviewItemBoughtNotification::SharedCtor() {
	_cached_size_ = 0;
	item_def_index_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCItemPreviewItemBoughtNotification::~CMsgGCItemPreviewItemBoughtNotification() {
	SharedDtor();
}

void CMsgGCItemPreviewItemBoughtNotification::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCItemPreviewItemBoughtNotification::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCItemPreviewItemBoughtNotification::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCItemPreviewItemBoughtNotification_descriptor_;
}

const CMsgGCItemPreviewItemBoughtNotification& CMsgGCItemPreviewItemBoughtNotification::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCItemPreviewItemBoughtNotification* CMsgGCItemPreviewItemBoughtNotification::default_instance_ = NULL;

CMsgGCItemPreviewItemBoughtNotification* CMsgGCItemPreviewItemBoughtNotification::New() const {
	return new CMsgGCItemPreviewItemBoughtNotification;
}

void CMsgGCItemPreviewItemBoughtNotification::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		item_def_index_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCItemPreviewItemBoughtNotification::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 item_def_index = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_def_index_)));
				set_has_item_def_index();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCItemPreviewItemBoughtNotification::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 item_def_index = 1;
	if (has_item_def_index()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->item_def_index(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCItemPreviewItemBoughtNotification::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 item_def_index = 1;
	if (has_item_def_index()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->item_def_index(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCItemPreviewItemBoughtNotification::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 item_def_index = 1;
		if (has_item_def_index()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_def_index());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCItemPreviewItemBoughtNotification::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCItemPreviewItemBoughtNotification* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCItemPreviewItemBoughtNotification*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCItemPreviewItemBoughtNotification::MergeFrom(const CMsgGCItemPreviewItemBoughtNotification& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_item_def_index()) {
			set_item_def_index(from.item_def_index());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCItemPreviewItemBoughtNotification::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCItemPreviewItemBoughtNotification::CopyFrom(const CMsgGCItemPreviewItemBoughtNotification& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCItemPreviewItemBoughtNotification::IsInitialized() const {

	return true;
}

void CMsgGCItemPreviewItemBoughtNotification::Swap(CMsgGCItemPreviewItemBoughtNotification* other) {
	if (other != this) {
		std::swap(item_def_index_, other->item_def_index_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCItemPreviewItemBoughtNotification::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCItemPreviewItemBoughtNotification_descriptor_;
	metadata.reflection = CMsgGCItemPreviewItemBoughtNotification_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseCancel::kTxnIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseCancel::CMsgGCStorePurchaseCancel()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseCancel::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseCancel::CMsgGCStorePurchaseCancel(const CMsgGCStorePurchaseCancel& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseCancel::SharedCtor() {
	_cached_size_ = 0;
	txn_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseCancel::~CMsgGCStorePurchaseCancel() {
	SharedDtor();
}

void CMsgGCStorePurchaseCancel::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseCancel::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseCancel::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseCancel_descriptor_;
}

const CMsgGCStorePurchaseCancel& CMsgGCStorePurchaseCancel::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseCancel* CMsgGCStorePurchaseCancel::default_instance_ = NULL;

CMsgGCStorePurchaseCancel* CMsgGCStorePurchaseCancel::New() const {
	return new CMsgGCStorePurchaseCancel;
}

void CMsgGCStorePurchaseCancel::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		txn_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseCancel::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 txn_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &txn_id_)));
				set_has_txn_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseCancel::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 txn_id = 1;
	if (has_txn_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->txn_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseCancel::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 txn_id = 1;
	if (has_txn_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->txn_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseCancel::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 txn_id = 1;
		if (has_txn_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->txn_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseCancel::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseCancel* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseCancel*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseCancel::MergeFrom(const CMsgGCStorePurchaseCancel& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_txn_id()) {
			set_txn_id(from.txn_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseCancel::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseCancel::CopyFrom(const CMsgGCStorePurchaseCancel& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseCancel::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseCancel::Swap(CMsgGCStorePurchaseCancel* other) {
	if (other != this) {
		std::swap(txn_id_, other->txn_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseCancel::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseCancel_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseCancel_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseCancelResponse::kResultFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseCancelResponse::CMsgGCStorePurchaseCancelResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseCancelResponse::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseCancelResponse::CMsgGCStorePurchaseCancelResponse(const CMsgGCStorePurchaseCancelResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseCancelResponse::SharedCtor() {
	_cached_size_ = 0;
	result_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseCancelResponse::~CMsgGCStorePurchaseCancelResponse() {
	SharedDtor();
}

void CMsgGCStorePurchaseCancelResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseCancelResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseCancelResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseCancelResponse_descriptor_;
}

const CMsgGCStorePurchaseCancelResponse& CMsgGCStorePurchaseCancelResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseCancelResponse* CMsgGCStorePurchaseCancelResponse::default_instance_ = NULL;

CMsgGCStorePurchaseCancelResponse* CMsgGCStorePurchaseCancelResponse::New() const {
	return new CMsgGCStorePurchaseCancelResponse;
}

void CMsgGCStorePurchaseCancelResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		result_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseCancelResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 result = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &result_)));
				set_has_result();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseCancelResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 result = 1;
	if (has_result()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->result(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseCancelResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 result = 1;
	if (has_result()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->result(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseCancelResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 result = 1;
		if (has_result()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->result());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseCancelResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseCancelResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseCancelResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseCancelResponse::MergeFrom(const CMsgGCStorePurchaseCancelResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_result()) {
			set_result(from.result());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseCancelResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseCancelResponse::CopyFrom(const CMsgGCStorePurchaseCancelResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseCancelResponse::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseCancelResponse::Swap(CMsgGCStorePurchaseCancelResponse* other) {
	if (other != this) {
		std::swap(result_, other->result_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseCancelResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseCancelResponse_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseCancelResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseFinalize::kTxnIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseFinalize::CMsgGCStorePurchaseFinalize()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseFinalize::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseFinalize::CMsgGCStorePurchaseFinalize(const CMsgGCStorePurchaseFinalize& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseFinalize::SharedCtor() {
	_cached_size_ = 0;
	txn_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseFinalize::~CMsgGCStorePurchaseFinalize() {
	SharedDtor();
}

void CMsgGCStorePurchaseFinalize::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseFinalize::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseFinalize::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseFinalize_descriptor_;
}

const CMsgGCStorePurchaseFinalize& CMsgGCStorePurchaseFinalize::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseFinalize* CMsgGCStorePurchaseFinalize::default_instance_ = NULL;

CMsgGCStorePurchaseFinalize* CMsgGCStorePurchaseFinalize::New() const {
	return new CMsgGCStorePurchaseFinalize;
}

void CMsgGCStorePurchaseFinalize::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		txn_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseFinalize::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 txn_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &txn_id_)));
				set_has_txn_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseFinalize::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 txn_id = 1;
	if (has_txn_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->txn_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseFinalize::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 txn_id = 1;
	if (has_txn_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->txn_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseFinalize::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 txn_id = 1;
		if (has_txn_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->txn_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseFinalize::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseFinalize* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseFinalize*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseFinalize::MergeFrom(const CMsgGCStorePurchaseFinalize& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_txn_id()) {
			set_txn_id(from.txn_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseFinalize::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseFinalize::CopyFrom(const CMsgGCStorePurchaseFinalize& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseFinalize::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseFinalize::Swap(CMsgGCStorePurchaseFinalize* other) {
	if (other != this) {
		std::swap(txn_id_, other->txn_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseFinalize::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseFinalize_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseFinalize_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCStorePurchaseFinalizeResponse::kResultFieldNumber;
const int CMsgGCStorePurchaseFinalizeResponse::kItemIdsFieldNumber;
#endif  // !_MSC_VER

CMsgGCStorePurchaseFinalizeResponse::CMsgGCStorePurchaseFinalizeResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCStorePurchaseFinalizeResponse::InitAsDefaultInstance() {
}

CMsgGCStorePurchaseFinalizeResponse::CMsgGCStorePurchaseFinalizeResponse(const CMsgGCStorePurchaseFinalizeResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCStorePurchaseFinalizeResponse::SharedCtor() {
	_cached_size_ = 0;
	result_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCStorePurchaseFinalizeResponse::~CMsgGCStorePurchaseFinalizeResponse() {
	SharedDtor();
}

void CMsgGCStorePurchaseFinalizeResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCStorePurchaseFinalizeResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCStorePurchaseFinalizeResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCStorePurchaseFinalizeResponse_descriptor_;
}

const CMsgGCStorePurchaseFinalizeResponse& CMsgGCStorePurchaseFinalizeResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCStorePurchaseFinalizeResponse* CMsgGCStorePurchaseFinalizeResponse::default_instance_ = NULL;

CMsgGCStorePurchaseFinalizeResponse* CMsgGCStorePurchaseFinalizeResponse::New() const {
	return new CMsgGCStorePurchaseFinalizeResponse;
}

void CMsgGCStorePurchaseFinalizeResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		result_ = 0u;
	}
	item_ids_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCStorePurchaseFinalizeResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 result = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &result_)));
				set_has_result();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_ids;
			break;
		}

			  // repeated uint64 item_ids = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_ids:
				DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						1, 16, input, this->mutable_item_ids())));
			}
			else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
				== ::google::protobuf::internal::WireFormatLite::
				WIRETYPE_LENGTH_DELIMITED) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, this->mutable_item_ids())));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_ids;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCStorePurchaseFinalizeResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 result = 1;
	if (has_result()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->result(), output);
	}

	// repeated uint64 item_ids = 2;
	for (int i = 0; i < this->item_ids_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(
			2, this->item_ids(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCStorePurchaseFinalizeResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 result = 1;
	if (has_result()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->result(), target);
	}

	// repeated uint64 item_ids = 2;
	for (int i = 0; i < this->item_ids_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteUInt64ToArray(2, this->item_ids(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCStorePurchaseFinalizeResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 result = 1;
		if (has_result()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->result());
		}

	}
	// repeated uint64 item_ids = 2;
	{
		int data_size = 0;
		for (int i = 0; i < this->item_ids_size(); i++) {
			data_size += ::google::protobuf::internal::WireFormatLite::
				UInt64Size(this->item_ids(i));
		}
		total_size += 1 * this->item_ids_size() + data_size;
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCStorePurchaseFinalizeResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCStorePurchaseFinalizeResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCStorePurchaseFinalizeResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCStorePurchaseFinalizeResponse::MergeFrom(const CMsgGCStorePurchaseFinalizeResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	item_ids_.MergeFrom(from.item_ids_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_result()) {
			set_result(from.result());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCStorePurchaseFinalizeResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCStorePurchaseFinalizeResponse::CopyFrom(const CMsgGCStorePurchaseFinalizeResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCStorePurchaseFinalizeResponse::IsInitialized() const {

	return true;
}

void CMsgGCStorePurchaseFinalizeResponse::Swap(CMsgGCStorePurchaseFinalizeResponse* other) {
	if (other != this) {
		std::swap(result_, other->result_);
		item_ids_.Swap(&other->item_ids_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCStorePurchaseFinalizeResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCStorePurchaseFinalizeResponse_descriptor_;
	metadata.reflection = CMsgGCStorePurchaseFinalizeResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCBannedWordListRequest::kBanListGroupIdFieldNumber;
const int CMsgGCBannedWordListRequest::kWordIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCBannedWordListRequest::CMsgGCBannedWordListRequest()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCBannedWordListRequest::InitAsDefaultInstance() {
}

CMsgGCBannedWordListRequest::CMsgGCBannedWordListRequest(const CMsgGCBannedWordListRequest& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCBannedWordListRequest::SharedCtor() {
	_cached_size_ = 0;
	ban_list_group_id_ = 0u;
	word_id_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCBannedWordListRequest::~CMsgGCBannedWordListRequest() {
	SharedDtor();
}

void CMsgGCBannedWordListRequest::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCBannedWordListRequest::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCBannedWordListRequest::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCBannedWordListRequest_descriptor_;
}

const CMsgGCBannedWordListRequest& CMsgGCBannedWordListRequest::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCBannedWordListRequest* CMsgGCBannedWordListRequest::default_instance_ = NULL;

CMsgGCBannedWordListRequest* CMsgGCBannedWordListRequest::New() const {
	return new CMsgGCBannedWordListRequest;
}

void CMsgGCBannedWordListRequest::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		ban_list_group_id_ = 0u;
		word_id_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCBannedWordListRequest::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 ban_list_group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &ban_list_group_id_)));
				set_has_ban_list_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_word_id;
			break;
		}

			  // optional uint32 word_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_word_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &word_id_)));
				set_has_word_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCBannedWordListRequest::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 ban_list_group_id = 1;
	if (has_ban_list_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ban_list_group_id(), output);
	}

	// optional uint32 word_id = 2;
	if (has_word_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->word_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCBannedWordListRequest::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 ban_list_group_id = 1;
	if (has_ban_list_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ban_list_group_id(), target);
	}

	// optional uint32 word_id = 2;
	if (has_word_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->word_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCBannedWordListRequest::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 ban_list_group_id = 1;
		if (has_ban_list_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->ban_list_group_id());
		}

		// optional uint32 word_id = 2;
		if (has_word_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->word_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCBannedWordListRequest::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCBannedWordListRequest* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCBannedWordListRequest*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCBannedWordListRequest::MergeFrom(const CMsgGCBannedWordListRequest& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_ban_list_group_id()) {
			set_ban_list_group_id(from.ban_list_group_id());
		}
		if (from.has_word_id()) {
			set_word_id(from.word_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCBannedWordListRequest::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCBannedWordListRequest::CopyFrom(const CMsgGCBannedWordListRequest& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCBannedWordListRequest::IsInitialized() const {

	return true;
}

void CMsgGCBannedWordListRequest::Swap(CMsgGCBannedWordListRequest* other) {
	if (other != this) {
		std::swap(ban_list_group_id_, other->ban_list_group_id_);
		std::swap(word_id_, other->word_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCBannedWordListRequest::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCBannedWordListRequest_descriptor_;
	metadata.reflection = CMsgGCBannedWordListRequest_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgGCRequestAnnouncements::CMsgGCRequestAnnouncements()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCRequestAnnouncements::InitAsDefaultInstance() {
}

CMsgGCRequestAnnouncements::CMsgGCRequestAnnouncements(const CMsgGCRequestAnnouncements& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCRequestAnnouncements::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCRequestAnnouncements::~CMsgGCRequestAnnouncements() {
	SharedDtor();
}

void CMsgGCRequestAnnouncements::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCRequestAnnouncements::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCRequestAnnouncements::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCRequestAnnouncements_descriptor_;
}

const CMsgGCRequestAnnouncements& CMsgGCRequestAnnouncements::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCRequestAnnouncements* CMsgGCRequestAnnouncements::default_instance_ = NULL;

CMsgGCRequestAnnouncements* CMsgGCRequestAnnouncements::New() const {
	return new CMsgGCRequestAnnouncements;
}

void CMsgGCRequestAnnouncements::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCRequestAnnouncements::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgGCRequestAnnouncements::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCRequestAnnouncements::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCRequestAnnouncements::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCRequestAnnouncements::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCRequestAnnouncements* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCRequestAnnouncements*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCRequestAnnouncements::MergeFrom(const CMsgGCRequestAnnouncements& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCRequestAnnouncements::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCRequestAnnouncements::CopyFrom(const CMsgGCRequestAnnouncements& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCRequestAnnouncements::IsInitialized() const {

	return true;
}

void CMsgGCRequestAnnouncements::Swap(CMsgGCRequestAnnouncements* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCRequestAnnouncements::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCRequestAnnouncements_descriptor_;
	metadata.reflection = CMsgGCRequestAnnouncements_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCRequestAnnouncementsResponse::kAnnouncementTitleFieldNumber;
const int CMsgGCRequestAnnouncementsResponse::kAnnouncementFieldNumber;
const int CMsgGCRequestAnnouncementsResponse::kNextmatchTitleFieldNumber;
const int CMsgGCRequestAnnouncementsResponse::kNextmatchFieldNumber;
#endif  // !_MSC_VER

CMsgGCRequestAnnouncementsResponse::CMsgGCRequestAnnouncementsResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCRequestAnnouncementsResponse::InitAsDefaultInstance() {
}

CMsgGCRequestAnnouncementsResponse::CMsgGCRequestAnnouncementsResponse(const CMsgGCRequestAnnouncementsResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCRequestAnnouncementsResponse::SharedCtor() {
	_cached_size_ = 0;
	announcement_title_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	announcement_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	nextmatch_title_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	nextmatch_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCRequestAnnouncementsResponse::~CMsgGCRequestAnnouncementsResponse() {
	SharedDtor();
}

void CMsgGCRequestAnnouncementsResponse::SharedDtor() {
	if (announcement_title_ != &::google::protobuf::internal::kEmptyString) {
		delete announcement_title_;
	}
	if (announcement_ != &::google::protobuf::internal::kEmptyString) {
		delete announcement_;
	}
	if (nextmatch_title_ != &::google::protobuf::internal::kEmptyString) {
		delete nextmatch_title_;
	}
	if (nextmatch_ != &::google::protobuf::internal::kEmptyString) {
		delete nextmatch_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCRequestAnnouncementsResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCRequestAnnouncementsResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCRequestAnnouncementsResponse_descriptor_;
}

const CMsgGCRequestAnnouncementsResponse& CMsgGCRequestAnnouncementsResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCRequestAnnouncementsResponse* CMsgGCRequestAnnouncementsResponse::default_instance_ = NULL;

CMsgGCRequestAnnouncementsResponse* CMsgGCRequestAnnouncementsResponse::New() const {
	return new CMsgGCRequestAnnouncementsResponse;
}

void CMsgGCRequestAnnouncementsResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_announcement_title()) {
			if (announcement_title_ != &::google::protobuf::internal::kEmptyString) {
				announcement_title_->clear();
			}
		}
		if (has_announcement()) {
			if (announcement_ != &::google::protobuf::internal::kEmptyString) {
				announcement_->clear();
			}
		}
		if (has_nextmatch_title()) {
			if (nextmatch_title_ != &::google::protobuf::internal::kEmptyString) {
				nextmatch_title_->clear();
			}
		}
		if (has_nextmatch()) {
			if (nextmatch_ != &::google::protobuf::internal::kEmptyString) {
				nextmatch_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCRequestAnnouncementsResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string announcement_title = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_announcement_title()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->announcement_title().data(), this->announcement_title().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_announcement;
			break;
		}

			  // optional string announcement = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_announcement:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_announcement()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->announcement().data(), this->announcement().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_nextmatch_title;
			break;
		}

			  // optional string nextmatch_title = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_nextmatch_title:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_nextmatch_title()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->nextmatch_title().data(), this->nextmatch_title().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(34)) goto parse_nextmatch;
			break;
		}

			  // optional string nextmatch = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_nextmatch:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_nextmatch()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->nextmatch().data(), this->nextmatch().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCRequestAnnouncementsResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string announcement_title = 1;
	if (has_announcement_title()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->announcement_title().data(), this->announcement_title().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->announcement_title(), output);
	}

	// optional string announcement = 2;
	if (has_announcement()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->announcement().data(), this->announcement().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			2, this->announcement(), output);
	}

	// optional string nextmatch_title = 3;
	if (has_nextmatch_title()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->nextmatch_title().data(), this->nextmatch_title().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->nextmatch_title(), output);
	}

	// optional string nextmatch = 4;
	if (has_nextmatch()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->nextmatch().data(), this->nextmatch().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			4, this->nextmatch(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCRequestAnnouncementsResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string announcement_title = 1;
	if (has_announcement_title()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->announcement_title().data(), this->announcement_title().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->announcement_title(), target);
	}

	// optional string announcement = 2;
	if (has_announcement()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->announcement().data(), this->announcement().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				2, this->announcement(), target);
	}

	// optional string nextmatch_title = 3;
	if (has_nextmatch_title()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->nextmatch_title().data(), this->nextmatch_title().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->nextmatch_title(), target);
	}

	// optional string nextmatch = 4;
	if (has_nextmatch()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->nextmatch().data(), this->nextmatch().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				4, this->nextmatch(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCRequestAnnouncementsResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string announcement_title = 1;
		if (has_announcement_title()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->announcement_title());
		}

		// optional string announcement = 2;
		if (has_announcement()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->announcement());
		}

		// optional string nextmatch_title = 3;
		if (has_nextmatch_title()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->nextmatch_title());
		}

		// optional string nextmatch = 4;
		if (has_nextmatch()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->nextmatch());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCRequestAnnouncementsResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCRequestAnnouncementsResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCRequestAnnouncementsResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCRequestAnnouncementsResponse::MergeFrom(const CMsgGCRequestAnnouncementsResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_announcement_title()) {
			set_announcement_title(from.announcement_title());
		}
		if (from.has_announcement()) {
			set_announcement(from.announcement());
		}
		if (from.has_nextmatch_title()) {
			set_nextmatch_title(from.nextmatch_title());
		}
		if (from.has_nextmatch()) {
			set_nextmatch(from.nextmatch());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCRequestAnnouncementsResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCRequestAnnouncementsResponse::CopyFrom(const CMsgGCRequestAnnouncementsResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCRequestAnnouncementsResponse::IsInitialized() const {

	return true;
}

void CMsgGCRequestAnnouncementsResponse::Swap(CMsgGCRequestAnnouncementsResponse* other) {
	if (other != this) {
		std::swap(announcement_title_, other->announcement_title_);
		std::swap(announcement_, other->announcement_);
		std::swap(nextmatch_title_, other->nextmatch_title_);
		std::swap(nextmatch_, other->nextmatch_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCRequestAnnouncementsResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCRequestAnnouncementsResponse_descriptor_;
	metadata.reflection = CMsgGCRequestAnnouncementsResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCBannedWord::kWordIdFieldNumber;
const int CMsgGCBannedWord::kWordTypeFieldNumber;
const int CMsgGCBannedWord::kWordFieldNumber;
#endif  // !_MSC_VER

CMsgGCBannedWord::CMsgGCBannedWord()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCBannedWord::InitAsDefaultInstance() {
}

CMsgGCBannedWord::CMsgGCBannedWord(const CMsgGCBannedWord& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCBannedWord::SharedCtor() {
	_cached_size_ = 0;
	word_id_ = 0u;
	word_type_ = 0;
	word_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCBannedWord::~CMsgGCBannedWord() {
	SharedDtor();
}

void CMsgGCBannedWord::SharedDtor() {
	if (word_ != &::google::protobuf::internal::kEmptyString) {
		delete word_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCBannedWord::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCBannedWord::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCBannedWord_descriptor_;
}

const CMsgGCBannedWord& CMsgGCBannedWord::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCBannedWord* CMsgGCBannedWord::default_instance_ = NULL;

CMsgGCBannedWord* CMsgGCBannedWord::New() const {
	return new CMsgGCBannedWord;
}

void CMsgGCBannedWord::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		word_id_ = 0u;
		word_type_ = 0;
		if (has_word()) {
			if (word_ != &::google::protobuf::internal::kEmptyString) {
				word_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCBannedWord::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 word_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &word_id_)));
				set_has_word_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_word_type;
			break;
		}

			  // optional .GC_BannedWordType word_type = 2 [default = GC_BANNED_WORD_DISABLE_WORD];
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_word_type:
				int value;
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
						input, &value)));
				if (::GC_BannedWordType_IsValid(value)) {
					set_word_type(static_cast<::GC_BannedWordType>(value));
				}
				else {
					mutable_unknown_fields()->AddVarint(2, value);
				}
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(26)) goto parse_word;
			break;
		}

			  // optional string word = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_word:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_word()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->word().data(), this->word().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCBannedWord::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 word_id = 1;
	if (has_word_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->word_id(), output);
	}

	// optional .GC_BannedWordType word_type = 2 [default = GC_BANNED_WORD_DISABLE_WORD];
	if (has_word_type()) {
		::google::protobuf::internal::WireFormatLite::WriteEnum(
			2, this->word_type(), output);
	}

	// optional string word = 3;
	if (has_word()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->word().data(), this->word().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			3, this->word(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCBannedWord::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 word_id = 1;
	if (has_word_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->word_id(), target);
	}

	// optional .GC_BannedWordType word_type = 2 [default = GC_BANNED_WORD_DISABLE_WORD];
	if (has_word_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
			2, this->word_type(), target);
	}

	// optional string word = 3;
	if (has_word()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->word().data(), this->word().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->word(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCBannedWord::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 word_id = 1;
		if (has_word_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->word_id());
		}

		// optional .GC_BannedWordType word_type = 2 [default = GC_BANNED_WORD_DISABLE_WORD];
		if (has_word_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::EnumSize(this->word_type());
		}

		// optional string word = 3;
		if (has_word()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->word());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCBannedWord::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCBannedWord* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCBannedWord*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCBannedWord::MergeFrom(const CMsgGCBannedWord& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_word_id()) {
			set_word_id(from.word_id());
		}
		if (from.has_word_type()) {
			set_word_type(from.word_type());
		}
		if (from.has_word()) {
			set_word(from.word());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCBannedWord::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCBannedWord::CopyFrom(const CMsgGCBannedWord& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCBannedWord::IsInitialized() const {

	return true;
}

void CMsgGCBannedWord::Swap(CMsgGCBannedWord* other) {
	if (other != this) {
		std::swap(word_id_, other->word_id_);
		std::swap(word_type_, other->word_type_);
		std::swap(word_, other->word_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCBannedWord::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCBannedWord_descriptor_;
	metadata.reflection = CMsgGCBannedWord_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCBannedWordListResponse::kBanListGroupIdFieldNumber;
const int CMsgGCBannedWordListResponse::kWordListFieldNumber;
#endif  // !_MSC_VER

CMsgGCBannedWordListResponse::CMsgGCBannedWordListResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCBannedWordListResponse::InitAsDefaultInstance() {
}

CMsgGCBannedWordListResponse::CMsgGCBannedWordListResponse(const CMsgGCBannedWordListResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCBannedWordListResponse::SharedCtor() {
	_cached_size_ = 0;
	ban_list_group_id_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCBannedWordListResponse::~CMsgGCBannedWordListResponse() {
	SharedDtor();
}

void CMsgGCBannedWordListResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCBannedWordListResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCBannedWordListResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCBannedWordListResponse_descriptor_;
}

const CMsgGCBannedWordListResponse& CMsgGCBannedWordListResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCBannedWordListResponse* CMsgGCBannedWordListResponse::default_instance_ = NULL;

CMsgGCBannedWordListResponse* CMsgGCBannedWordListResponse::New() const {
	return new CMsgGCBannedWordListResponse;
}

void CMsgGCBannedWordListResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		ban_list_group_id_ = 0u;
	}
	word_list_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCBannedWordListResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 ban_list_group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &ban_list_group_id_)));
				set_has_ban_list_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_word_list;
			break;
		}

			  // repeated .CMsgGCBannedWord word_list = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_word_list:
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, add_word_list()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(18)) goto parse_word_list;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCBannedWordListResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 ban_list_group_id = 1;
	if (has_ban_list_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ban_list_group_id(), output);
	}

	// repeated .CMsgGCBannedWord word_list = 2;
	for (int i = 0; i < this->word_list_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			2, this->word_list(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCBannedWordListResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 ban_list_group_id = 1;
	if (has_ban_list_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ban_list_group_id(), target);
	}

	// repeated .CMsgGCBannedWord word_list = 2;
	for (int i = 0; i < this->word_list_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				2, this->word_list(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCBannedWordListResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 ban_list_group_id = 1;
		if (has_ban_list_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->ban_list_group_id());
		}

	}
	// repeated .CMsgGCBannedWord word_list = 2;
	total_size += 1 * this->word_list_size();
	for (int i = 0; i < this->word_list_size(); i++) {
		total_size +=
			::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
				this->word_list(i));
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCBannedWordListResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCBannedWordListResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCBannedWordListResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCBannedWordListResponse::MergeFrom(const CMsgGCBannedWordListResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	word_list_.MergeFrom(from.word_list_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_ban_list_group_id()) {
			set_ban_list_group_id(from.ban_list_group_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCBannedWordListResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCBannedWordListResponse::CopyFrom(const CMsgGCBannedWordListResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCBannedWordListResponse::IsInitialized() const {

	return true;
}

void CMsgGCBannedWordListResponse::Swap(CMsgGCBannedWordListResponse* other) {
	if (other != this) {
		std::swap(ban_list_group_id_, other->ban_list_group_id_);
		word_list_.Swap(&other->word_list_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCBannedWordListResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCBannedWordListResponse_descriptor_;
	metadata.reflection = CMsgGCBannedWordListResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCBannedWordListBroadcast::kBroadcastFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCBannedWordListBroadcast::CMsgGCToGCBannedWordListBroadcast()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCBannedWordListBroadcast::InitAsDefaultInstance() {
	broadcast_ = const_cast<::CMsgGCBannedWordListResponse*>(&::CMsgGCBannedWordListResponse::default_instance());
}

CMsgGCToGCBannedWordListBroadcast::CMsgGCToGCBannedWordListBroadcast(const CMsgGCToGCBannedWordListBroadcast& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCBannedWordListBroadcast::SharedCtor() {
	_cached_size_ = 0;
	broadcast_ = NULL;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCBannedWordListBroadcast::~CMsgGCToGCBannedWordListBroadcast() {
	SharedDtor();
}

void CMsgGCToGCBannedWordListBroadcast::SharedDtor() {
	if (this != default_instance_) {
		delete broadcast_;
	}
}

void CMsgGCToGCBannedWordListBroadcast::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCBannedWordListBroadcast::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCBannedWordListBroadcast_descriptor_;
}

const CMsgGCToGCBannedWordListBroadcast& CMsgGCToGCBannedWordListBroadcast::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCBannedWordListBroadcast* CMsgGCToGCBannedWordListBroadcast::default_instance_ = NULL;

CMsgGCToGCBannedWordListBroadcast* CMsgGCToGCBannedWordListBroadcast::New() const {
	return new CMsgGCToGCBannedWordListBroadcast;
}

void CMsgGCToGCBannedWordListBroadcast::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_broadcast()) {
			if (broadcast_ != NULL) broadcast_->::CMsgGCBannedWordListResponse::Clear();
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCBannedWordListBroadcast::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional .CMsgGCBannedWordListResponse broadcast = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
					input, mutable_broadcast()));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCBannedWordListBroadcast::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional .CMsgGCBannedWordListResponse broadcast = 1;
	if (has_broadcast()) {
		::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
			1, this->broadcast(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCBannedWordListBroadcast::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional .CMsgGCBannedWordListResponse broadcast = 1;
	if (has_broadcast()) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteMessageNoVirtualToArray(
				1, this->broadcast(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCBannedWordListBroadcast::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional .CMsgGCBannedWordListResponse broadcast = 1;
		if (has_broadcast()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
					this->broadcast());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCBannedWordListBroadcast::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCBannedWordListBroadcast* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCBannedWordListBroadcast*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCBannedWordListBroadcast::MergeFrom(const CMsgGCToGCBannedWordListBroadcast& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_broadcast()) {
			mutable_broadcast()->::CMsgGCBannedWordListResponse::MergeFrom(from.broadcast());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCBannedWordListBroadcast::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCBannedWordListBroadcast::CopyFrom(const CMsgGCToGCBannedWordListBroadcast& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCBannedWordListBroadcast::IsInitialized() const {

	return true;
}

void CMsgGCToGCBannedWordListBroadcast::Swap(CMsgGCToGCBannedWordListBroadcast* other) {
	if (other != this) {
		std::swap(broadcast_, other->broadcast_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCBannedWordListBroadcast::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCBannedWordListBroadcast_descriptor_;
	metadata.reflection = CMsgGCToGCBannedWordListBroadcast_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCBannedWordListUpdated::kGroupIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCBannedWordListUpdated::CMsgGCToGCBannedWordListUpdated()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCBannedWordListUpdated::InitAsDefaultInstance() {
}

CMsgGCToGCBannedWordListUpdated::CMsgGCToGCBannedWordListUpdated(const CMsgGCToGCBannedWordListUpdated& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCBannedWordListUpdated::SharedCtor() {
	_cached_size_ = 0;
	group_id_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCBannedWordListUpdated::~CMsgGCToGCBannedWordListUpdated() {
	SharedDtor();
}

void CMsgGCToGCBannedWordListUpdated::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCBannedWordListUpdated::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCBannedWordListUpdated::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCBannedWordListUpdated_descriptor_;
}

const CMsgGCToGCBannedWordListUpdated& CMsgGCToGCBannedWordListUpdated::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCBannedWordListUpdated* CMsgGCToGCBannedWordListUpdated::default_instance_ = NULL;

CMsgGCToGCBannedWordListUpdated* CMsgGCToGCBannedWordListUpdated::New() const {
	return new CMsgGCToGCBannedWordListUpdated;
}

void CMsgGCToGCBannedWordListUpdated::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		group_id_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCBannedWordListUpdated::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 group_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &group_id_)));
				set_has_group_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCBannedWordListUpdated::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 group_id = 1;
	if (has_group_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->group_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCBannedWordListUpdated::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 group_id = 1;
	if (has_group_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->group_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCBannedWordListUpdated::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 group_id = 1;
		if (has_group_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->group_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCBannedWordListUpdated::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCBannedWordListUpdated* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCBannedWordListUpdated*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCBannedWordListUpdated::MergeFrom(const CMsgGCToGCBannedWordListUpdated& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_group_id()) {
			set_group_id(from.group_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCBannedWordListUpdated::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCBannedWordListUpdated::CopyFrom(const CMsgGCToGCBannedWordListUpdated& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCBannedWordListUpdated::IsInitialized() const {

	return true;
}

void CMsgGCToGCBannedWordListUpdated::Swap(CMsgGCToGCBannedWordListUpdated* other) {
	if (other != this) {
		std::swap(group_id_, other->group_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCBannedWordListUpdated::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCBannedWordListUpdated_descriptor_;
	metadata.reflection = CMsgGCToGCBannedWordListUpdated_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSOEconDefaultEquippedDefinitionInstanceClient::kAccountIdFieldNumber;
const int CSOEconDefaultEquippedDefinitionInstanceClient::kItemDefinitionFieldNumber;
const int CSOEconDefaultEquippedDefinitionInstanceClient::kClassIdFieldNumber;
const int CSOEconDefaultEquippedDefinitionInstanceClient::kSlotIdFieldNumber;
#endif  // !_MSC_VER

CSOEconDefaultEquippedDefinitionInstanceClient::CSOEconDefaultEquippedDefinitionInstanceClient()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CSOEconDefaultEquippedDefinitionInstanceClient::InitAsDefaultInstance() {
}

CSOEconDefaultEquippedDefinitionInstanceClient::CSOEconDefaultEquippedDefinitionInstanceClient(const CSOEconDefaultEquippedDefinitionInstanceClient& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CSOEconDefaultEquippedDefinitionInstanceClient::SharedCtor() {
	_cached_size_ = 0;
	account_id_ = 0u;
	item_definition_ = 0u;
	class_id_ = 0u;
	slot_id_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSOEconDefaultEquippedDefinitionInstanceClient::~CSOEconDefaultEquippedDefinitionInstanceClient() {
	SharedDtor();
}

void CSOEconDefaultEquippedDefinitionInstanceClient::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CSOEconDefaultEquippedDefinitionInstanceClient::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSOEconDefaultEquippedDefinitionInstanceClient::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_;
}

const CSOEconDefaultEquippedDefinitionInstanceClient& CSOEconDefaultEquippedDefinitionInstanceClient::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CSOEconDefaultEquippedDefinitionInstanceClient* CSOEconDefaultEquippedDefinitionInstanceClient::default_instance_ = NULL;

CSOEconDefaultEquippedDefinitionInstanceClient* CSOEconDefaultEquippedDefinitionInstanceClient::New() const {
	return new CSOEconDefaultEquippedDefinitionInstanceClient;
}

void CSOEconDefaultEquippedDefinitionInstanceClient::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		account_id_ = 0u;
		item_definition_ = 0u;
		class_id_ = 0u;
		slot_id_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CSOEconDefaultEquippedDefinitionInstanceClient::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 account_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &account_id_)));
				set_has_account_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_item_definition;
			break;
		}

			  // optional uint32 item_definition = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_item_definition:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &item_definition_)));
				set_has_item_definition();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_class_id;
			break;
		}

			  // optional uint32 class_id = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_class_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &class_id_)));
				set_has_class_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_slot_id;
			break;
		}

			  // optional uint32 slot_id = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_slot_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &slot_id_)));
				set_has_slot_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CSOEconDefaultEquippedDefinitionInstanceClient::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->account_id(), output);
	}

	// optional uint32 item_definition = 2;
	if (has_item_definition()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->item_definition(), output);
	}

	// optional uint32 class_id = 3;
	if (has_class_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->class_id(), output);
	}

	// optional uint32 slot_id = 4;
	if (has_slot_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->slot_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CSOEconDefaultEquippedDefinitionInstanceClient::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 account_id = 1;
	if (has_account_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->account_id(), target);
	}

	// optional uint32 item_definition = 2;
	if (has_item_definition()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->item_definition(), target);
	}

	// optional uint32 class_id = 3;
	if (has_class_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->class_id(), target);
	}

	// optional uint32 slot_id = 4;
	if (has_slot_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->slot_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CSOEconDefaultEquippedDefinitionInstanceClient::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 account_id = 1;
		if (has_account_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->account_id());
		}

		// optional uint32 item_definition = 2;
		if (has_item_definition()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->item_definition());
		}

		// optional uint32 class_id = 3;
		if (has_class_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->class_id());
		}

		// optional uint32 slot_id = 4;
		if (has_slot_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->slot_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CSOEconDefaultEquippedDefinitionInstanceClient::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CSOEconDefaultEquippedDefinitionInstanceClient* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CSOEconDefaultEquippedDefinitionInstanceClient*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CSOEconDefaultEquippedDefinitionInstanceClient::MergeFrom(const CSOEconDefaultEquippedDefinitionInstanceClient& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_account_id()) {
			set_account_id(from.account_id());
		}
		if (from.has_item_definition()) {
			set_item_definition(from.item_definition());
		}
		if (from.has_class_id()) {
			set_class_id(from.class_id());
		}
		if (from.has_slot_id()) {
			set_slot_id(from.slot_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSOEconDefaultEquippedDefinitionInstanceClient::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CSOEconDefaultEquippedDefinitionInstanceClient::CopyFrom(const CSOEconDefaultEquippedDefinitionInstanceClient& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CSOEconDefaultEquippedDefinitionInstanceClient::IsInitialized() const {

	return true;
}

void CSOEconDefaultEquippedDefinitionInstanceClient::Swap(CSOEconDefaultEquippedDefinitionInstanceClient* other) {
	if (other != this) {
		std::swap(account_id_, other->account_id_);
		std::swap(item_definition_, other->item_definition_);
		std::swap(class_id_, other->class_id_);
		std::swap(slot_id_, other->slot_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CSOEconDefaultEquippedDefinitionInstanceClient::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CSOEconDefaultEquippedDefinitionInstanceClient_descriptor_;
	metadata.reflection = CSOEconDefaultEquippedDefinitionInstanceClient_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCDirtySDOCache::kSdoTypeFieldNumber;
const int CMsgGCToGCDirtySDOCache::kKeyUint64FieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCDirtySDOCache::CMsgGCToGCDirtySDOCache()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCDirtySDOCache::InitAsDefaultInstance() {
}

CMsgGCToGCDirtySDOCache::CMsgGCToGCDirtySDOCache(const CMsgGCToGCDirtySDOCache& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCDirtySDOCache::SharedCtor() {
	_cached_size_ = 0;
	sdo_type_ = 0u;
	key_uint64_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCDirtySDOCache::~CMsgGCToGCDirtySDOCache() {
	SharedDtor();
}

void CMsgGCToGCDirtySDOCache::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCDirtySDOCache::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCDirtySDOCache::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCDirtySDOCache_descriptor_;
}

const CMsgGCToGCDirtySDOCache& CMsgGCToGCDirtySDOCache::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCDirtySDOCache* CMsgGCToGCDirtySDOCache::default_instance_ = NULL;

CMsgGCToGCDirtySDOCache* CMsgGCToGCDirtySDOCache::New() const {
	return new CMsgGCToGCDirtySDOCache;
}

void CMsgGCToGCDirtySDOCache::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		sdo_type_ = 0u;
		key_uint64_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCDirtySDOCache::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 sdo_type = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &sdo_type_)));
				set_has_sdo_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_key_uint64;
			break;
		}

			  // optional uint64 key_uint64 = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_key_uint64:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &key_uint64_)));
				set_has_key_uint64();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCDirtySDOCache::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 sdo_type = 1;
	if (has_sdo_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sdo_type(), output);
	}

	// optional uint64 key_uint64 = 2;
	if (has_key_uint64()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->key_uint64(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCDirtySDOCache::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 sdo_type = 1;
	if (has_sdo_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sdo_type(), target);
	}

	// optional uint64 key_uint64 = 2;
	if (has_key_uint64()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->key_uint64(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCDirtySDOCache::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 sdo_type = 1;
		if (has_sdo_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->sdo_type());
		}

		// optional uint64 key_uint64 = 2;
		if (has_key_uint64()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->key_uint64());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCDirtySDOCache::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCDirtySDOCache* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCDirtySDOCache*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCDirtySDOCache::MergeFrom(const CMsgGCToGCDirtySDOCache& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_sdo_type()) {
			set_sdo_type(from.sdo_type());
		}
		if (from.has_key_uint64()) {
			set_key_uint64(from.key_uint64());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCDirtySDOCache::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCDirtySDOCache::CopyFrom(const CMsgGCToGCDirtySDOCache& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCDirtySDOCache::IsInitialized() const {

	return true;
}

void CMsgGCToGCDirtySDOCache::Swap(CMsgGCToGCDirtySDOCache* other) {
	if (other != this) {
		std::swap(sdo_type_, other->sdo_type_);
		std::swap(key_uint64_, other->key_uint64_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCDirtySDOCache::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCDirtySDOCache_descriptor_;
	metadata.reflection = CMsgGCToGCDirtySDOCache_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCDirtyMultipleSDOCache::kSdoTypeFieldNumber;
const int CMsgGCToGCDirtyMultipleSDOCache::kKeyUint64FieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCDirtyMultipleSDOCache::CMsgGCToGCDirtyMultipleSDOCache()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCDirtyMultipleSDOCache::InitAsDefaultInstance() {
}

CMsgGCToGCDirtyMultipleSDOCache::CMsgGCToGCDirtyMultipleSDOCache(const CMsgGCToGCDirtyMultipleSDOCache& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCDirtyMultipleSDOCache::SharedCtor() {
	_cached_size_ = 0;
	sdo_type_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCDirtyMultipleSDOCache::~CMsgGCToGCDirtyMultipleSDOCache() {
	SharedDtor();
}

void CMsgGCToGCDirtyMultipleSDOCache::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCDirtyMultipleSDOCache::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCDirtyMultipleSDOCache::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCDirtyMultipleSDOCache_descriptor_;
}

const CMsgGCToGCDirtyMultipleSDOCache& CMsgGCToGCDirtyMultipleSDOCache::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCDirtyMultipleSDOCache* CMsgGCToGCDirtyMultipleSDOCache::default_instance_ = NULL;

CMsgGCToGCDirtyMultipleSDOCache* CMsgGCToGCDirtyMultipleSDOCache::New() const {
	return new CMsgGCToGCDirtyMultipleSDOCache;
}

void CMsgGCToGCDirtyMultipleSDOCache::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		sdo_type_ = 0u;
	}
	key_uint64_.Clear();
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCDirtyMultipleSDOCache::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 sdo_type = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &sdo_type_)));
				set_has_sdo_type();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_key_uint64;
			break;
		}

			  // repeated uint64 key_uint64 = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_key_uint64:
				DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						1, 16, input, this->mutable_key_uint64())));
			}
			else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
				== ::google::protobuf::internal::WireFormatLite::
				WIRETYPE_LENGTH_DELIMITED) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, this->mutable_key_uint64())));
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_key_uint64;
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCDirtyMultipleSDOCache::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 sdo_type = 1;
	if (has_sdo_type()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sdo_type(), output);
	}

	// repeated uint64 key_uint64 = 2;
	for (int i = 0; i < this->key_uint64_size(); i++) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(
			2, this->key_uint64(i), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCDirtyMultipleSDOCache::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 sdo_type = 1;
	if (has_sdo_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sdo_type(), target);
	}

	// repeated uint64 key_uint64 = 2;
	for (int i = 0; i < this->key_uint64_size(); i++) {
		target = ::google::protobuf::internal::WireFormatLite::
			WriteUInt64ToArray(2, this->key_uint64(i), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCDirtyMultipleSDOCache::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 sdo_type = 1;
		if (has_sdo_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->sdo_type());
		}

	}
	// repeated uint64 key_uint64 = 2;
	{
		int data_size = 0;
		for (int i = 0; i < this->key_uint64_size(); i++) {
			data_size += ::google::protobuf::internal::WireFormatLite::
				UInt64Size(this->key_uint64(i));
		}
		total_size += 1 * this->key_uint64_size() + data_size;
	}

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCDirtyMultipleSDOCache::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCDirtyMultipleSDOCache* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCDirtyMultipleSDOCache*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCDirtyMultipleSDOCache::MergeFrom(const CMsgGCToGCDirtyMultipleSDOCache& from) {
	GOOGLE_CHECK_NE(&from, this);
	key_uint64_.MergeFrom(from.key_uint64_);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_sdo_type()) {
			set_sdo_type(from.sdo_type());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCDirtyMultipleSDOCache::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCDirtyMultipleSDOCache::CopyFrom(const CMsgGCToGCDirtyMultipleSDOCache& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCDirtyMultipleSDOCache::IsInitialized() const {

	return true;
}

void CMsgGCToGCDirtyMultipleSDOCache::Swap(CMsgGCToGCDirtyMultipleSDOCache* other) {
	if (other != this) {
		std::swap(sdo_type_, other->sdo_type_);
		key_uint64_.Swap(&other->key_uint64_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCDirtyMultipleSDOCache::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCDirtyMultipleSDOCache_descriptor_;
	metadata.reflection = CMsgGCToGCDirtyMultipleSDOCache_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCCollectItem::kCollectionItemIdFieldNumber;
const int CMsgGCCollectItem::kSubjectItemIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCCollectItem::CMsgGCCollectItem()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCCollectItem::InitAsDefaultInstance() {
}

CMsgGCCollectItem::CMsgGCCollectItem(const CMsgGCCollectItem& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCCollectItem::SharedCtor() {
	_cached_size_ = 0;
	collection_item_id_ = GOOGLE_ULONGLONG(0);
	subject_item_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCCollectItem::~CMsgGCCollectItem() {
	SharedDtor();
}

void CMsgGCCollectItem::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCCollectItem::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCCollectItem::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCCollectItem_descriptor_;
}

const CMsgGCCollectItem& CMsgGCCollectItem::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCCollectItem* CMsgGCCollectItem::default_instance_ = NULL;

CMsgGCCollectItem* CMsgGCCollectItem::New() const {
	return new CMsgGCCollectItem;
}

void CMsgGCCollectItem::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		collection_item_id_ = GOOGLE_ULONGLONG(0);
		subject_item_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCCollectItem::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint64 collection_item_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &collection_item_id_)));
				set_has_collection_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_subject_item_id;
			break;
		}

			  // optional uint64 subject_item_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_subject_item_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
						input, &subject_item_id_)));
				set_has_subject_item_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCCollectItem::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint64 collection_item_id = 1;
	if (has_collection_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->collection_item_id(), output);
	}

	// optional uint64 subject_item_id = 2;
	if (has_subject_item_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->subject_item_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCCollectItem::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint64 collection_item_id = 1;
	if (has_collection_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->collection_item_id(), target);
	}

	// optional uint64 subject_item_id = 2;
	if (has_subject_item_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->subject_item_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCCollectItem::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint64 collection_item_id = 1;
		if (has_collection_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->collection_item_id());
		}

		// optional uint64 subject_item_id = 2;
		if (has_subject_item_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt64Size(
					this->subject_item_id());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCCollectItem::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCCollectItem* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCCollectItem*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCCollectItem::MergeFrom(const CMsgGCCollectItem& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_collection_item_id()) {
			set_collection_item_id(from.collection_item_id());
		}
		if (from.has_subject_item_id()) {
			set_subject_item_id(from.subject_item_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCCollectItem::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCCollectItem::CopyFrom(const CMsgGCCollectItem& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCCollectItem::IsInitialized() const {

	return true;
}

void CMsgGCCollectItem::Swap(CMsgGCCollectItem* other) {
	if (other != this) {
		std::swap(collection_item_id_, other->collection_item_id_);
		std::swap(subject_item_id_, other->subject_item_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCCollectItem::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCCollectItem_descriptor_;
	metadata.reflection = CMsgGCCollectItem_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgSDONoMemcached::CMsgSDONoMemcached()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgSDONoMemcached::InitAsDefaultInstance() {
}

CMsgSDONoMemcached::CMsgSDONoMemcached(const CMsgSDONoMemcached& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgSDONoMemcached::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgSDONoMemcached::~CMsgSDONoMemcached() {
	SharedDtor();
}

void CMsgSDONoMemcached::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgSDONoMemcached::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgSDONoMemcached::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgSDONoMemcached_descriptor_;
}

const CMsgSDONoMemcached& CMsgSDONoMemcached::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgSDONoMemcached* CMsgSDONoMemcached::default_instance_ = NULL;

CMsgSDONoMemcached* CMsgSDONoMemcached::New() const {
	return new CMsgSDONoMemcached;
}

void CMsgSDONoMemcached::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgSDONoMemcached::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgSDONoMemcached::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgSDONoMemcached::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgSDONoMemcached::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgSDONoMemcached::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgSDONoMemcached* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgSDONoMemcached*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgSDONoMemcached::MergeFrom(const CMsgSDONoMemcached& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgSDONoMemcached::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgSDONoMemcached::CopyFrom(const CMsgSDONoMemcached& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgSDONoMemcached::IsInitialized() const {

	return true;
}

void CMsgSDONoMemcached::Swap(CMsgSDONoMemcached* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgSDONoMemcached::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgSDONoMemcached_descriptor_;
	metadata.reflection = CMsgSDONoMemcached_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCUpdateSQLKeyValue::kKeyNameFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCUpdateSQLKeyValue::CMsgGCToGCUpdateSQLKeyValue()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCUpdateSQLKeyValue::InitAsDefaultInstance() {
}

CMsgGCToGCUpdateSQLKeyValue::CMsgGCToGCUpdateSQLKeyValue(const CMsgGCToGCUpdateSQLKeyValue& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCUpdateSQLKeyValue::SharedCtor() {
	_cached_size_ = 0;
	key_name_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCUpdateSQLKeyValue::~CMsgGCToGCUpdateSQLKeyValue() {
	SharedDtor();
}

void CMsgGCToGCUpdateSQLKeyValue::SharedDtor() {
	if (key_name_ != &::google::protobuf::internal::kEmptyString) {
		delete key_name_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCToGCUpdateSQLKeyValue::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCUpdateSQLKeyValue::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCUpdateSQLKeyValue_descriptor_;
}

const CMsgGCToGCUpdateSQLKeyValue& CMsgGCToGCUpdateSQLKeyValue::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCUpdateSQLKeyValue* CMsgGCToGCUpdateSQLKeyValue::default_instance_ = NULL;

CMsgGCToGCUpdateSQLKeyValue* CMsgGCToGCUpdateSQLKeyValue::New() const {
	return new CMsgGCToGCUpdateSQLKeyValue;
}

void CMsgGCToGCUpdateSQLKeyValue::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_key_name()) {
			if (key_name_ != &::google::protobuf::internal::kEmptyString) {
				key_name_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCUpdateSQLKeyValue::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string key_name = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_key_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->key_name().data(), this->key_name().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCUpdateSQLKeyValue::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string key_name = 1;
	if (has_key_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->key_name().data(), this->key_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->key_name(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCUpdateSQLKeyValue::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string key_name = 1;
	if (has_key_name()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->key_name().data(), this->key_name().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->key_name(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCUpdateSQLKeyValue::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string key_name = 1;
		if (has_key_name()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->key_name());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCUpdateSQLKeyValue::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCUpdateSQLKeyValue* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCUpdateSQLKeyValue*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCUpdateSQLKeyValue::MergeFrom(const CMsgGCToGCUpdateSQLKeyValue& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_key_name()) {
			set_key_name(from.key_name());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCUpdateSQLKeyValue::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCUpdateSQLKeyValue::CopyFrom(const CMsgGCToGCUpdateSQLKeyValue& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCUpdateSQLKeyValue::IsInitialized() const {

	return true;
}

void CMsgGCToGCUpdateSQLKeyValue::Swap(CMsgGCToGCUpdateSQLKeyValue* other) {
	if (other != this) {
		std::swap(key_name_, other->key_name_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCUpdateSQLKeyValue::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCUpdateSQLKeyValue_descriptor_;
	metadata.reflection = CMsgGCToGCUpdateSQLKeyValue_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCIsTrustedServer::kSteamIdFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCIsTrustedServer::CMsgGCToGCIsTrustedServer()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCIsTrustedServer::InitAsDefaultInstance() {
}

CMsgGCToGCIsTrustedServer::CMsgGCToGCIsTrustedServer(const CMsgGCToGCIsTrustedServer& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCIsTrustedServer::SharedCtor() {
	_cached_size_ = 0;
	steam_id_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCIsTrustedServer::~CMsgGCToGCIsTrustedServer() {
	SharedDtor();
}

void CMsgGCToGCIsTrustedServer::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCIsTrustedServer::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCIsTrustedServer::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCIsTrustedServer_descriptor_;
}

const CMsgGCToGCIsTrustedServer& CMsgGCToGCIsTrustedServer::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCIsTrustedServer* CMsgGCToGCIsTrustedServer::default_instance_ = NULL;

CMsgGCToGCIsTrustedServer* CMsgGCToGCIsTrustedServer::New() const {
	return new CMsgGCToGCIsTrustedServer;
}

void CMsgGCToGCIsTrustedServer::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		steam_id_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCIsTrustedServer::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &steam_id_)));
				set_has_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCIsTrustedServer::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->steam_id(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCIsTrustedServer::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->steam_id(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCIsTrustedServer::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 steam_id = 1;
		if (has_steam_id()) {
			total_size += 1 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCIsTrustedServer::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCIsTrustedServer* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCIsTrustedServer*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCIsTrustedServer::MergeFrom(const CMsgGCToGCIsTrustedServer& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_steam_id()) {
			set_steam_id(from.steam_id());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCIsTrustedServer::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCIsTrustedServer::CopyFrom(const CMsgGCToGCIsTrustedServer& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCIsTrustedServer::IsInitialized() const {

	return true;
}

void CMsgGCToGCIsTrustedServer::Swap(CMsgGCToGCIsTrustedServer* other) {
	if (other != this) {
		std::swap(steam_id_, other->steam_id_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCIsTrustedServer::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCIsTrustedServer_descriptor_;
	metadata.reflection = CMsgGCToGCIsTrustedServer_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCIsTrustedServerResponse::kIsTrustedFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCIsTrustedServerResponse::CMsgGCToGCIsTrustedServerResponse()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCIsTrustedServerResponse::InitAsDefaultInstance() {
}

CMsgGCToGCIsTrustedServerResponse::CMsgGCToGCIsTrustedServerResponse(const CMsgGCToGCIsTrustedServerResponse& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCIsTrustedServerResponse::SharedCtor() {
	_cached_size_ = 0;
	is_trusted_ = false;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCIsTrustedServerResponse::~CMsgGCToGCIsTrustedServerResponse() {
	SharedDtor();
}

void CMsgGCToGCIsTrustedServerResponse::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCIsTrustedServerResponse::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCIsTrustedServerResponse::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCIsTrustedServerResponse_descriptor_;
}

const CMsgGCToGCIsTrustedServerResponse& CMsgGCToGCIsTrustedServerResponse::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCIsTrustedServerResponse* CMsgGCToGCIsTrustedServerResponse::default_instance_ = NULL;

CMsgGCToGCIsTrustedServerResponse* CMsgGCToGCIsTrustedServerResponse::New() const {
	return new CMsgGCToGCIsTrustedServerResponse;
}

void CMsgGCToGCIsTrustedServerResponse::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		is_trusted_ = false;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCIsTrustedServerResponse::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional bool is_trusted = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &is_trusted_)));
				set_has_is_trusted();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCIsTrustedServerResponse::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional bool is_trusted = 1;
	if (has_is_trusted()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_trusted(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCIsTrustedServerResponse::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional bool is_trusted = 1;
	if (has_is_trusted()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_trusted(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCIsTrustedServerResponse::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional bool is_trusted = 1;
		if (has_is_trusted()) {
			total_size += 1 + 1;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCIsTrustedServerResponse::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCIsTrustedServerResponse* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCIsTrustedServerResponse*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCIsTrustedServerResponse::MergeFrom(const CMsgGCToGCIsTrustedServerResponse& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_is_trusted()) {
			set_is_trusted(from.is_trusted());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCIsTrustedServerResponse::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCIsTrustedServerResponse::CopyFrom(const CMsgGCToGCIsTrustedServerResponse& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCIsTrustedServerResponse::IsInitialized() const {

	return true;
}

void CMsgGCToGCIsTrustedServerResponse::Swap(CMsgGCToGCIsTrustedServerResponse* other) {
	if (other != this) {
		std::swap(is_trusted_, other->is_trusted_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCIsTrustedServerResponse::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCIsTrustedServerResponse_descriptor_;
	metadata.reflection = CMsgGCToGCIsTrustedServerResponse_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCBroadcastConsoleCommand::kConCommandFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCBroadcastConsoleCommand::CMsgGCToGCBroadcastConsoleCommand()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCBroadcastConsoleCommand::InitAsDefaultInstance() {
}

CMsgGCToGCBroadcastConsoleCommand::CMsgGCToGCBroadcastConsoleCommand(const CMsgGCToGCBroadcastConsoleCommand& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCBroadcastConsoleCommand::SharedCtor() {
	_cached_size_ = 0;
	con_command_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCBroadcastConsoleCommand::~CMsgGCToGCBroadcastConsoleCommand() {
	SharedDtor();
}

void CMsgGCToGCBroadcastConsoleCommand::SharedDtor() {
	if (con_command_ != &::google::protobuf::internal::kEmptyString) {
		delete con_command_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGCToGCBroadcastConsoleCommand::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCBroadcastConsoleCommand::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCBroadcastConsoleCommand_descriptor_;
}

const CMsgGCToGCBroadcastConsoleCommand& CMsgGCToGCBroadcastConsoleCommand::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCBroadcastConsoleCommand* CMsgGCToGCBroadcastConsoleCommand::default_instance_ = NULL;

CMsgGCToGCBroadcastConsoleCommand* CMsgGCToGCBroadcastConsoleCommand::New() const {
	return new CMsgGCToGCBroadcastConsoleCommand;
}

void CMsgGCToGCBroadcastConsoleCommand::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (has_con_command()) {
			if (con_command_ != &::google::protobuf::internal::kEmptyString) {
				con_command_->clear();
			}
		}
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCBroadcastConsoleCommand::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional string con_command = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_con_command()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->con_command().data(), this->con_command().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCBroadcastConsoleCommand::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional string con_command = 1;
	if (has_con_command()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->con_command().data(), this->con_command().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			1, this->con_command(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCBroadcastConsoleCommand::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional string con_command = 1;
	if (has_con_command()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->con_command().data(), this->con_command().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->con_command(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCBroadcastConsoleCommand::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional string con_command = 1;
		if (has_con_command()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->con_command());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCBroadcastConsoleCommand::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCBroadcastConsoleCommand* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCBroadcastConsoleCommand*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCBroadcastConsoleCommand::MergeFrom(const CMsgGCToGCBroadcastConsoleCommand& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_con_command()) {
			set_con_command(from.con_command());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCBroadcastConsoleCommand::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCBroadcastConsoleCommand::CopyFrom(const CMsgGCToGCBroadcastConsoleCommand& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCBroadcastConsoleCommand::IsInitialized() const {

	return true;
}

void CMsgGCToGCBroadcastConsoleCommand::Swap(CMsgGCToGCBroadcastConsoleCommand* other) {
	if (other != this) {
		std::swap(con_command_, other->con_command_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCBroadcastConsoleCommand::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCBroadcastConsoleCommand_descriptor_;
	metadata.reflection = CMsgGCToGCBroadcastConsoleCommand_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCServerVersionUpdated::kServerVersionFieldNumber;
#endif  // !_MSC_VER

CMsgGCServerVersionUpdated::CMsgGCServerVersionUpdated()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCServerVersionUpdated::InitAsDefaultInstance() {
}

CMsgGCServerVersionUpdated::CMsgGCServerVersionUpdated(const CMsgGCServerVersionUpdated& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCServerVersionUpdated::SharedCtor() {
	_cached_size_ = 0;
	server_version_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCServerVersionUpdated::~CMsgGCServerVersionUpdated() {
	SharedDtor();
}

void CMsgGCServerVersionUpdated::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCServerVersionUpdated::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCServerVersionUpdated::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCServerVersionUpdated_descriptor_;
}

const CMsgGCServerVersionUpdated& CMsgGCServerVersionUpdated::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCServerVersionUpdated* CMsgGCServerVersionUpdated::default_instance_ = NULL;

CMsgGCServerVersionUpdated* CMsgGCServerVersionUpdated::New() const {
	return new CMsgGCServerVersionUpdated;
}

void CMsgGCServerVersionUpdated::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		server_version_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCServerVersionUpdated::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 server_version = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &server_version_)));
				set_has_server_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCServerVersionUpdated::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 server_version = 1;
	if (has_server_version()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->server_version(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCServerVersionUpdated::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 server_version = 1;
	if (has_server_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->server_version(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCServerVersionUpdated::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 server_version = 1;
		if (has_server_version()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->server_version());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCServerVersionUpdated::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCServerVersionUpdated* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCServerVersionUpdated*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCServerVersionUpdated::MergeFrom(const CMsgGCServerVersionUpdated& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_server_version()) {
			set_server_version(from.server_version());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCServerVersionUpdated::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCServerVersionUpdated::CopyFrom(const CMsgGCServerVersionUpdated& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCServerVersionUpdated::IsInitialized() const {

	return true;
}

void CMsgGCServerVersionUpdated::Swap(CMsgGCServerVersionUpdated* other) {
	if (other != this) {
		std::swap(server_version_, other->server_version_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCServerVersionUpdated::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCServerVersionUpdated_descriptor_;
	metadata.reflection = CMsgGCServerVersionUpdated_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCClientVersionUpdated::kClientVersionFieldNumber;
#endif  // !_MSC_VER

CMsgGCClientVersionUpdated::CMsgGCClientVersionUpdated()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCClientVersionUpdated::InitAsDefaultInstance() {
}

CMsgGCClientVersionUpdated::CMsgGCClientVersionUpdated(const CMsgGCClientVersionUpdated& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCClientVersionUpdated::SharedCtor() {
	_cached_size_ = 0;
	client_version_ = 0u;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCClientVersionUpdated::~CMsgGCClientVersionUpdated() {
	SharedDtor();
}

void CMsgGCClientVersionUpdated::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCClientVersionUpdated::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCClientVersionUpdated::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCClientVersionUpdated_descriptor_;
}

const CMsgGCClientVersionUpdated& CMsgGCClientVersionUpdated::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCClientVersionUpdated* CMsgGCClientVersionUpdated::default_instance_ = NULL;

CMsgGCClientVersionUpdated* CMsgGCClientVersionUpdated::New() const {
	return new CMsgGCClientVersionUpdated;
}

void CMsgGCClientVersionUpdated::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		client_version_ = 0u;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCClientVersionUpdated::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional uint32 client_version = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &client_version_)));
				set_has_client_version();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCClientVersionUpdated::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional uint32 client_version = 1;
	if (has_client_version()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->client_version(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCClientVersionUpdated::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional uint32 client_version = 1;
	if (has_client_version()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->client_version(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCClientVersionUpdated::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional uint32 client_version = 1;
		if (has_client_version()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->client_version());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCClientVersionUpdated::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCClientVersionUpdated* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCClientVersionUpdated*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCClientVersionUpdated::MergeFrom(const CMsgGCClientVersionUpdated& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_client_version()) {
			set_client_version(from.client_version());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCClientVersionUpdated::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCClientVersionUpdated::CopyFrom(const CMsgGCClientVersionUpdated& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCClientVersionUpdated::IsInitialized() const {

	return true;
}

void CMsgGCClientVersionUpdated::Swap(CMsgGCClientVersionUpdated* other) {
	if (other != this) {
		std::swap(client_version_, other->client_version_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCClientVersionUpdated::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCClientVersionUpdated_descriptor_;
	metadata.reflection = CMsgGCClientVersionUpdated_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CMsgGCToGCWebAPIAccountChanged::CMsgGCToGCWebAPIAccountChanged()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCWebAPIAccountChanged::InitAsDefaultInstance() {
}

CMsgGCToGCWebAPIAccountChanged::CMsgGCToGCWebAPIAccountChanged(const CMsgGCToGCWebAPIAccountChanged& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCWebAPIAccountChanged::SharedCtor() {
	_cached_size_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCWebAPIAccountChanged::~CMsgGCToGCWebAPIAccountChanged() {
	SharedDtor();
}

void CMsgGCToGCWebAPIAccountChanged::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCWebAPIAccountChanged::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCWebAPIAccountChanged::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCWebAPIAccountChanged_descriptor_;
}

const CMsgGCToGCWebAPIAccountChanged& CMsgGCToGCWebAPIAccountChanged::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCWebAPIAccountChanged* CMsgGCToGCWebAPIAccountChanged::default_instance_ = NULL;

CMsgGCToGCWebAPIAccountChanged* CMsgGCToGCWebAPIAccountChanged::New() const {
	return new CMsgGCToGCWebAPIAccountChanged;
}

void CMsgGCToGCWebAPIAccountChanged::Clear() {
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCWebAPIAccountChanged::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
			::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
			return true;
		}
		DO_(::google::protobuf::internal::WireFormat::SkipField(
			input, tag, mutable_unknown_fields()));
	}
	return true;
#undef DO_
}

void CMsgGCToGCWebAPIAccountChanged::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCWebAPIAccountChanged::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCWebAPIAccountChanged::ByteSize() const {
	int total_size = 0;

	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCWebAPIAccountChanged::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCWebAPIAccountChanged* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCWebAPIAccountChanged*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCWebAPIAccountChanged::MergeFrom(const CMsgGCToGCWebAPIAccountChanged& from) {
	GOOGLE_CHECK_NE(&from, this);
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCWebAPIAccountChanged::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCWebAPIAccountChanged::CopyFrom(const CMsgGCToGCWebAPIAccountChanged& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCWebAPIAccountChanged::IsInitialized() const {

	return true;
}

void CMsgGCToGCWebAPIAccountChanged::Swap(CMsgGCToGCWebAPIAccountChanged* other) {
	if (other != this) {
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCWebAPIAccountChanged::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCWebAPIAccountChanged_descriptor_;
	metadata.reflection = CMsgGCToGCWebAPIAccountChanged_reflection_;
	return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CMsgGCToGCRequestPassportItemGrant::kSteamIdFieldNumber;
const int CMsgGCToGCRequestPassportItemGrant::kLeagueIdFieldNumber;
const int CMsgGCToGCRequestPassportItemGrant::kRewardFlagFieldNumber;
#endif  // !_MSC_VER

CMsgGCToGCRequestPassportItemGrant::CMsgGCToGCRequestPassportItemGrant()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGCToGCRequestPassportItemGrant::InitAsDefaultInstance() {
}

CMsgGCToGCRequestPassportItemGrant::CMsgGCToGCRequestPassportItemGrant(const CMsgGCToGCRequestPassportItemGrant& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGCToGCRequestPassportItemGrant::SharedCtor() {
	_cached_size_ = 0;
	steam_id_ = GOOGLE_ULONGLONG(0);
	league_id_ = 0u;
	reward_flag_ = 0;
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGCToGCRequestPassportItemGrant::~CMsgGCToGCRequestPassportItemGrant() {
	SharedDtor();
}

void CMsgGCToGCRequestPassportItemGrant::SharedDtor() {
	if (this != default_instance_) {
	}
}

void CMsgGCToGCRequestPassportItemGrant::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGCToGCRequestPassportItemGrant::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGCToGCRequestPassportItemGrant_descriptor_;
}

const CMsgGCToGCRequestPassportItemGrant& CMsgGCToGCRequestPassportItemGrant::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGCToGCRequestPassportItemGrant* CMsgGCToGCRequestPassportItemGrant::default_instance_ = NULL;

CMsgGCToGCRequestPassportItemGrant* CMsgGCToGCRequestPassportItemGrant::New() const {
	return new CMsgGCToGCRequestPassportItemGrant;
}

void CMsgGCToGCRequestPassportItemGrant::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		steam_id_ = GOOGLE_ULONGLONG(0);
		league_id_ = 0u;
		reward_flag_ = 0;
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGCToGCRequestPassportItemGrant::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed64 steam_id = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &steam_id_)));
				set_has_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(16)) goto parse_league_id;
			break;
		}

			  // optional uint32 league_id = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_league_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &league_id_)));
				set_has_league_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_reward_flag;
			break;
		}

			  // optional int32 reward_flag = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_reward_flag:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &reward_flag_)));
				set_has_reward_flag();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGCToGCRequestPassportItemGrant::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->steam_id(), output);
	}

	// optional uint32 league_id = 2;
	if (has_league_id()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->league_id(), output);
	}

	// optional int32 reward_flag = 3;
	if (has_reward_flag()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->reward_flag(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGCToGCRequestPassportItemGrant::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed64 steam_id = 1;
	if (has_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->steam_id(), target);
	}

	// optional uint32 league_id = 2;
	if (has_league_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->league_id(), target);
	}

	// optional int32 reward_flag = 3;
	if (has_reward_flag()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->reward_flag(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGCToGCRequestPassportItemGrant::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed64 steam_id = 1;
		if (has_steam_id()) {
			total_size += 1 + 8;
		}

		// optional uint32 league_id = 2;
		if (has_league_id()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->league_id());
		}

		// optional int32 reward_flag = 3;
		if (has_reward_flag()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->reward_flag());
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGCToGCRequestPassportItemGrant::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGCToGCRequestPassportItemGrant* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGCToGCRequestPassportItemGrant*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGCToGCRequestPassportItemGrant::MergeFrom(const CMsgGCToGCRequestPassportItemGrant& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_steam_id()) {
			set_steam_id(from.steam_id());
		}
		if (from.has_league_id()) {
			set_league_id(from.league_id());
		}
		if (from.has_reward_flag()) {
			set_reward_flag(from.reward_flag());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGCToGCRequestPassportItemGrant::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGCToGCRequestPassportItemGrant::CopyFrom(const CMsgGCToGCRequestPassportItemGrant& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGCToGCRequestPassportItemGrant::IsInitialized() const {

	return true;
}

void CMsgGCToGCRequestPassportItemGrant::Swap(CMsgGCToGCRequestPassportItemGrant* other) {
	if (other != this) {
		std::swap(steam_id_, other->steam_id_);
		std::swap(league_id_, other->league_id_);
		std::swap(reward_flag_, other->reward_flag_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGCToGCRequestPassportItemGrant::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGCToGCRequestPassportItemGrant_descriptor_;
	metadata.reflection = CMsgGCToGCRequestPassportItemGrant_reflection_;
	return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* CMsgGameServerInfo_ServerType_descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGameServerInfo_ServerType_descriptor_;
}
bool CMsgGameServerInfo_ServerType_IsValid(int value) {
	switch (value) {
	case 0:
	case 1:
	case 2:
		return true;
	default:
		return false;
	}
}

#ifndef _MSC_VER
const CMsgGameServerInfo_ServerType CMsgGameServerInfo::UNSPECIFIED;
const CMsgGameServerInfo_ServerType CMsgGameServerInfo::GAME;
const CMsgGameServerInfo_ServerType CMsgGameServerInfo::PROXY;
const CMsgGameServerInfo_ServerType CMsgGameServerInfo::ServerType_MIN;
const CMsgGameServerInfo_ServerType CMsgGameServerInfo::ServerType_MAX;
const int CMsgGameServerInfo::ServerType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int CMsgGameServerInfo::kServerPublicIpAddrFieldNumber;
const int CMsgGameServerInfo::kServerPrivateIpAddrFieldNumber;
const int CMsgGameServerInfo::kServerPortFieldNumber;
const int CMsgGameServerInfo::kServerTvPortFieldNumber;
const int CMsgGameServerInfo::kServerKeyFieldNumber;
const int CMsgGameServerInfo::kServerHibernationFieldNumber;
const int CMsgGameServerInfo::kServerTypeFieldNumber;
const int CMsgGameServerInfo::kServerRegionFieldNumber;
const int CMsgGameServerInfo::kServerLoadavgFieldNumber;
const int CMsgGameServerInfo::kServerTvBroadcastTimeFieldNumber;
const int CMsgGameServerInfo::kServerGameTimeFieldNumber;
const int CMsgGameServerInfo::kServerRelayConnectedSteamIdFieldNumber;
const int CMsgGameServerInfo::kRelaySlotsMaxFieldNumber;
const int CMsgGameServerInfo::kRelaysConnectedFieldNumber;
const int CMsgGameServerInfo::kRelayClientsConnectedFieldNumber;
const int CMsgGameServerInfo::kRelayedGameServerSteamIdFieldNumber;
const int CMsgGameServerInfo::kParentRelayCountFieldNumber;
const int CMsgGameServerInfo::kTvSecretCodeFieldNumber;
#endif  // !_MSC_VER

CMsgGameServerInfo::CMsgGameServerInfo()
	: ::google::protobuf::Message() {
	SharedCtor();
}

void CMsgGameServerInfo::InitAsDefaultInstance() {
}

CMsgGameServerInfo::CMsgGameServerInfo(const CMsgGameServerInfo& from)
	: ::google::protobuf::Message() {
	SharedCtor();
	MergeFrom(from);
}

void CMsgGameServerInfo::SharedCtor() {
	_cached_size_ = 0;
	server_public_ip_addr_ = 0u;
	server_private_ip_addr_ = 0u;
	server_port_ = 0u;
	server_tv_port_ = 0u;
	server_key_ = const_cast<::std::string*>(&::google::protobuf::internal::kEmptyString);
	server_hibernation_ = false;
	server_type_ = 0;
	server_region_ = 0u;
	server_loadavg_ = 0;
	server_tv_broadcast_time_ = 0;
	server_game_time_ = 0;
	server_relay_connected_steam_id_ = GOOGLE_ULONGLONG(0);
	relay_slots_max_ = 0u;
	relays_connected_ = 0;
	relay_clients_connected_ = 0;
	relayed_game_server_steam_id_ = GOOGLE_ULONGLONG(0);
	parent_relay_count_ = 0u;
	tv_secret_code_ = GOOGLE_ULONGLONG(0);
	::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMsgGameServerInfo::~CMsgGameServerInfo() {
	SharedDtor();
}

void CMsgGameServerInfo::SharedDtor() {
	if (server_key_ != &::google::protobuf::internal::kEmptyString) {
		delete server_key_;
	}
	if (this != default_instance_) {
	}
}

void CMsgGameServerInfo::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMsgGameServerInfo::descriptor() {
	protobuf_AssignDescriptorsOnce();
	return CMsgGameServerInfo_descriptor_;
}

const CMsgGameServerInfo& CMsgGameServerInfo::default_instance() {
	if (default_instance_ == NULL) protobuf_AddDesc_base_5fgcmessages_2eproto();
	return *default_instance_;
}

CMsgGameServerInfo* CMsgGameServerInfo::default_instance_ = NULL;

CMsgGameServerInfo* CMsgGameServerInfo::New() const {
	return new CMsgGameServerInfo;
}

void CMsgGameServerInfo::Clear() {
	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		server_public_ip_addr_ = 0u;
		server_private_ip_addr_ = 0u;
		server_port_ = 0u;
		server_tv_port_ = 0u;
		if (has_server_key()) {
			if (server_key_ != &::google::protobuf::internal::kEmptyString) {
				server_key_->clear();
			}
		}
		server_hibernation_ = false;
		server_type_ = 0;
		server_region_ = 0u;
	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		server_loadavg_ = 0;
		server_tv_broadcast_time_ = 0;
		server_game_time_ = 0;
		server_relay_connected_steam_id_ = GOOGLE_ULONGLONG(0);
		relay_slots_max_ = 0u;
		relays_connected_ = 0;
		relay_clients_connected_ = 0;
		relayed_game_server_steam_id_ = GOOGLE_ULONGLONG(0);
	}
	if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
		parent_relay_count_ = 0u;
		tv_secret_code_ = GOOGLE_ULONGLONG(0);
	}
	::memset(_has_bits_, 0, sizeof(_has_bits_));
	mutable_unknown_fields()->Clear();
}

bool CMsgGameServerInfo::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
	::google::protobuf::uint32 tag;
	while ((tag = input->ReadTag()) != 0) {
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// optional fixed32 server_public_ip_addr = 1;
		case 1: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &server_public_ip_addr_)));
				set_has_server_public_ip_addr();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(21)) goto parse_server_private_ip_addr;
			break;
		}

			  // optional fixed32 server_private_ip_addr = 2;
		case 2: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_server_private_ip_addr:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
						input, &server_private_ip_addr_)));
				set_has_server_private_ip_addr();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(24)) goto parse_server_port;
			break;
		}

			  // optional uint32 server_port = 3;
		case 3: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_server_port:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &server_port_)));
				set_has_server_port();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(32)) goto parse_server_tv_port;
			break;
		}

			  // optional uint32 server_tv_port = 4;
		case 4: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_server_tv_port:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &server_tv_port_)));
				set_has_server_tv_port();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(42)) goto parse_server_key;
			break;
		}

			  // optional string server_key = 5;
		case 5: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
			parse_server_key:
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_server_key()));
				::google::protobuf::internal::WireFormat::VerifyUTF8String(
					this->server_key().data(), this->server_key().length(),
					::google::protobuf::internal::WireFormat::PARSE);
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(48)) goto parse_server_hibernation;
			break;
		}

			  // optional bool server_hibernation = 6;
		case 6: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_server_hibernation:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
						input, &server_hibernation_)));
				set_has_server_hibernation();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(56)) goto parse_server_type;
			break;
		}

			  // optional .CMsgGameServerInfo.ServerType server_type = 7 [default = UNSPECIFIED];
		case 7: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_server_type:
				int value;
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
						input, &value)));
				if (::CMsgGameServerInfo_ServerType_IsValid(value)) {
					set_server_type(static_cast<::CMsgGameServerInfo_ServerType>(value));
				}
				else {
					mutable_unknown_fields()->AddVarint(7, value);
				}
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(64)) goto parse_server_region;
			break;
		}

			  // optional uint32 server_region = 8;
		case 8: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_server_region:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &server_region_)));
				set_has_server_region();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(77)) goto parse_server_loadavg;
			break;
		}

			  // optional float server_loadavg = 9;
		case 9: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_server_loadavg:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &server_loadavg_)));
				set_has_server_loadavg();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(85)) goto parse_server_tv_broadcast_time;
			break;
		}

			  // optional float server_tv_broadcast_time = 10;
		case 10: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_server_tv_broadcast_time:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &server_tv_broadcast_time_)));
				set_has_server_tv_broadcast_time();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(93)) goto parse_server_game_time;
			break;
		}

			   // optional float server_game_time = 11;
		case 11: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
			parse_server_game_time:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
						input, &server_game_time_)));
				set_has_server_game_time();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(97)) goto parse_server_relay_connected_steam_id;
			break;
		}

			   // optional fixed64 server_relay_connected_steam_id = 12;
		case 12: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_server_relay_connected_steam_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &server_relay_connected_steam_id_)));
				set_has_server_relay_connected_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(104)) goto parse_relay_slots_max;
			break;
		}

			   // optional uint32 relay_slots_max = 13;
		case 13: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_relay_slots_max:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &relay_slots_max_)));
				set_has_relay_slots_max();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(112)) goto parse_relays_connected;
			break;
		}

			   // optional int32 relays_connected = 14;
		case 14: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_relays_connected:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &relays_connected_)));
				set_has_relays_connected();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(120)) goto parse_relay_clients_connected;
			break;
		}

			   // optional int32 relay_clients_connected = 15;
		case 15: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_relay_clients_connected:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &relay_clients_connected_)));
				set_has_relay_clients_connected();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(129)) goto parse_relayed_game_server_steam_id;
			break;
		}

			   // optional fixed64 relayed_game_server_steam_id = 16;
		case 16: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_relayed_game_server_steam_id:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &relayed_game_server_steam_id_)));
				set_has_relayed_game_server_steam_id();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(136)) goto parse_parent_relay_count;
			break;
		}

			   // optional uint32 parent_relay_count = 17;
		case 17: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
			parse_parent_relay_count:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
						input, &parent_relay_count_)));
				set_has_parent_relay_count();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectTag(145)) goto parse_tv_secret_code;
			break;
		}

			   // optional fixed64 tv_secret_code = 18;
		case 18: {
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
			parse_tv_secret_code:
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
						input, &tv_secret_code_)));
				set_has_tv_secret_code();
			}
			else {
				goto handle_uninterpreted;
			}
			if (input->ExpectAtEnd()) return true;
			break;
		}

		default: {
		handle_uninterpreted:
			if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
				::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
				return true;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, mutable_unknown_fields()));
			break;
		}
		}
	}
	return true;
#undef DO_
}

void CMsgGameServerInfo::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// optional fixed32 server_public_ip_addr = 1;
	if (has_server_public_ip_addr()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->server_public_ip_addr(), output);
	}

	// optional fixed32 server_private_ip_addr = 2;
	if (has_server_private_ip_addr()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->server_private_ip_addr(), output);
	}

	// optional uint32 server_port = 3;
	if (has_server_port()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->server_port(), output);
	}

	// optional uint32 server_tv_port = 4;
	if (has_server_tv_port()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->server_tv_port(), output);
	}

	// optional string server_key = 5;
	if (has_server_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->server_key().data(), this->server_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		::google::protobuf::internal::WireFormatLite::WriteString(
			5, this->server_key(), output);
	}

	// optional bool server_hibernation = 6;
	if (has_server_hibernation()) {
		::google::protobuf::internal::WireFormatLite::WriteBool(6, this->server_hibernation(), output);
	}

	// optional .CMsgGameServerInfo.ServerType server_type = 7 [default = UNSPECIFIED];
	if (has_server_type()) {
		::google::protobuf::internal::WireFormatLite::WriteEnum(
			7, this->server_type(), output);
	}

	// optional uint32 server_region = 8;
	if (has_server_region()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->server_region(), output);
	}

	// optional float server_loadavg = 9;
	if (has_server_loadavg()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->server_loadavg(), output);
	}

	// optional float server_tv_broadcast_time = 10;
	if (has_server_tv_broadcast_time()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->server_tv_broadcast_time(), output);
	}

	// optional float server_game_time = 11;
	if (has_server_game_time()) {
		::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->server_game_time(), output);
	}

	// optional fixed64 server_relay_connected_steam_id = 12;
	if (has_server_relay_connected_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(12, this->server_relay_connected_steam_id(), output);
	}

	// optional uint32 relay_slots_max = 13;
	if (has_relay_slots_max()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->relay_slots_max(), output);
	}

	// optional int32 relays_connected = 14;
	if (has_relays_connected()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->relays_connected(), output);
	}

	// optional int32 relay_clients_connected = 15;
	if (has_relay_clients_connected()) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->relay_clients_connected(), output);
	}

	// optional fixed64 relayed_game_server_steam_id = 16;
	if (has_relayed_game_server_steam_id()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(16, this->relayed_game_server_steam_id(), output);
	}

	// optional uint32 parent_relay_count = 17;
	if (has_parent_relay_count()) {
		::google::protobuf::internal::WireFormatLite::WriteUInt32(17, this->parent_relay_count(), output);
	}

	// optional fixed64 tv_secret_code = 18;
	if (has_tv_secret_code()) {
		::google::protobuf::internal::WireFormatLite::WriteFixed64(18, this->tv_secret_code(), output);
	}

	if (!unknown_fields().empty()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			unknown_fields(), output);
	}
}

::google::protobuf::uint8* CMsgGameServerInfo::SerializeWithCachedSizesToArray(
	::google::protobuf::uint8* target) const {
	// optional fixed32 server_public_ip_addr = 1;
	if (has_server_public_ip_addr()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->server_public_ip_addr(), target);
	}

	// optional fixed32 server_private_ip_addr = 2;
	if (has_server_private_ip_addr()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->server_private_ip_addr(), target);
	}

	// optional uint32 server_port = 3;
	if (has_server_port()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->server_port(), target);
	}

	// optional uint32 server_tv_port = 4;
	if (has_server_tv_port()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->server_tv_port(), target);
	}

	// optional string server_key = 5;
	if (has_server_key()) {
		::google::protobuf::internal::WireFormat::VerifyUTF8String(
			this->server_key().data(), this->server_key().length(),
			::google::protobuf::internal::WireFormat::SERIALIZE);
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				5, this->server_key(), target);
	}

	// optional bool server_hibernation = 6;
	if (has_server_hibernation()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->server_hibernation(), target);
	}

	// optional .CMsgGameServerInfo.ServerType server_type = 7 [default = UNSPECIFIED];
	if (has_server_type()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
			7, this->server_type(), target);
	}

	// optional uint32 server_region = 8;
	if (has_server_region()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->server_region(), target);
	}

	// optional float server_loadavg = 9;
	if (has_server_loadavg()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->server_loadavg(), target);
	}

	// optional float server_tv_broadcast_time = 10;
	if (has_server_tv_broadcast_time()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->server_tv_broadcast_time(), target);
	}

	// optional float server_game_time = 11;
	if (has_server_game_time()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->server_game_time(), target);
	}

	// optional fixed64 server_relay_connected_steam_id = 12;
	if (has_server_relay_connected_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(12, this->server_relay_connected_steam_id(), target);
	}

	// optional uint32 relay_slots_max = 13;
	if (has_relay_slots_max()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->relay_slots_max(), target);
	}

	// optional int32 relays_connected = 14;
	if (has_relays_connected()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->relays_connected(), target);
	}

	// optional int32 relay_clients_connected = 15;
	if (has_relay_clients_connected()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->relay_clients_connected(), target);
	}

	// optional fixed64 relayed_game_server_steam_id = 16;
	if (has_relayed_game_server_steam_id()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(16, this->relayed_game_server_steam_id(), target);
	}

	// optional uint32 parent_relay_count = 17;
	if (has_parent_relay_count()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(17, this->parent_relay_count(), target);
	}

	// optional fixed64 tv_secret_code = 18;
	if (has_tv_secret_code()) {
		target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(18, this->tv_secret_code(), target);
	}

	if (!unknown_fields().empty()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			unknown_fields(), target);
	}
	return target;
}

int CMsgGameServerInfo::ByteSize() const {
	int total_size = 0;

	if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		// optional fixed32 server_public_ip_addr = 1;
		if (has_server_public_ip_addr()) {
			total_size += 1 + 4;
		}

		// optional fixed32 server_private_ip_addr = 2;
		if (has_server_private_ip_addr()) {
			total_size += 1 + 4;
		}

		// optional uint32 server_port = 3;
		if (has_server_port()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->server_port());
		}

		// optional uint32 server_tv_port = 4;
		if (has_server_tv_port()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->server_tv_port());
		}

		// optional string server_key = 5;
		if (has_server_key()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::StringSize(
					this->server_key());
		}

		// optional bool server_hibernation = 6;
		if (has_server_hibernation()) {
			total_size += 1 + 1;
		}

		// optional .CMsgGameServerInfo.ServerType server_type = 7 [default = UNSPECIFIED];
		if (has_server_type()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::EnumSize(this->server_type());
		}

		// optional uint32 server_region = 8;
		if (has_server_region()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->server_region());
		}

	}
	if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		// optional float server_loadavg = 9;
		if (has_server_loadavg()) {
			total_size += 1 + 4;
		}

		// optional float server_tv_broadcast_time = 10;
		if (has_server_tv_broadcast_time()) {
			total_size += 1 + 4;
		}

		// optional float server_game_time = 11;
		if (has_server_game_time()) {
			total_size += 1 + 4;
		}

		// optional fixed64 server_relay_connected_steam_id = 12;
		if (has_server_relay_connected_steam_id()) {
			total_size += 1 + 8;
		}

		// optional uint32 relay_slots_max = 13;
		if (has_relay_slots_max()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->relay_slots_max());
		}

		// optional int32 relays_connected = 14;
		if (has_relays_connected()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->relays_connected());
		}

		// optional int32 relay_clients_connected = 15;
		if (has_relay_clients_connected()) {
			total_size += 1 +
				::google::protobuf::internal::WireFormatLite::Int32Size(
					this->relay_clients_connected());
		}

		// optional fixed64 relayed_game_server_steam_id = 16;
		if (has_relayed_game_server_steam_id()) {
			total_size += 2 + 8;
		}

	}
	if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
		// optional uint32 parent_relay_count = 17;
		if (has_parent_relay_count()) {
			total_size += 2 +
				::google::protobuf::internal::WireFormatLite::UInt32Size(
					this->parent_relay_count());
		}

		// optional fixed64 tv_secret_code = 18;
		if (has_tv_secret_code()) {
			total_size += 2 + 8;
		}

	}
	if (!unknown_fields().empty()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				unknown_fields());
	}
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = total_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void CMsgGameServerInfo::MergeFrom(const ::google::protobuf::Message& from) {
	GOOGLE_CHECK_NE(&from, this);
	const CMsgGameServerInfo* source =
		::google::protobuf::internal::dynamic_cast_if_available<const CMsgGameServerInfo*>(
			&from);
	if (source == NULL) {
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		MergeFrom(*source);
	}
}

void CMsgGameServerInfo::MergeFrom(const CMsgGameServerInfo& from) {
	GOOGLE_CHECK_NE(&from, this);
	if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
		if (from.has_server_public_ip_addr()) {
			set_server_public_ip_addr(from.server_public_ip_addr());
		}
		if (from.has_server_private_ip_addr()) {
			set_server_private_ip_addr(from.server_private_ip_addr());
		}
		if (from.has_server_port()) {
			set_server_port(from.server_port());
		}
		if (from.has_server_tv_port()) {
			set_server_tv_port(from.server_tv_port());
		}
		if (from.has_server_key()) {
			set_server_key(from.server_key());
		}
		if (from.has_server_hibernation()) {
			set_server_hibernation(from.server_hibernation());
		}
		if (from.has_server_type()) {
			set_server_type(from.server_type());
		}
		if (from.has_server_region()) {
			set_server_region(from.server_region());
		}
	}
	if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
		if (from.has_server_loadavg()) {
			set_server_loadavg(from.server_loadavg());
		}
		if (from.has_server_tv_broadcast_time()) {
			set_server_tv_broadcast_time(from.server_tv_broadcast_time());
		}
		if (from.has_server_game_time()) {
			set_server_game_time(from.server_game_time());
		}
		if (from.has_server_relay_connected_steam_id()) {
			set_server_relay_connected_steam_id(from.server_relay_connected_steam_id());
		}
		if (from.has_relay_slots_max()) {
			set_relay_slots_max(from.relay_slots_max());
		}
		if (from.has_relays_connected()) {
			set_relays_connected(from.relays_connected());
		}
		if (from.has_relay_clients_connected()) {
			set_relay_clients_connected(from.relay_clients_connected());
		}
		if (from.has_relayed_game_server_steam_id()) {
			set_relayed_game_server_steam_id(from.relayed_game_server_steam_id());
		}
	}
	if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
		if (from.has_parent_relay_count()) {
			set_parent_relay_count(from.parent_relay_count());
		}
		if (from.has_tv_secret_code()) {
			set_tv_secret_code(from.tv_secret_code());
		}
	}
	mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMsgGameServerInfo::CopyFrom(const ::google::protobuf::Message& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void CMsgGameServerInfo::CopyFrom(const CMsgGameServerInfo& from) {
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool CMsgGameServerInfo::IsInitialized() const {

	return true;
}

void CMsgGameServerInfo::Swap(CMsgGameServerInfo* other) {
	if (other != this) {
		std::swap(server_public_ip_addr_, other->server_public_ip_addr_);
		std::swap(server_private_ip_addr_, other->server_private_ip_addr_);
		std::swap(server_port_, other->server_port_);
		std::swap(server_tv_port_, other->server_tv_port_);
		std::swap(server_key_, other->server_key_);
		std::swap(server_hibernation_, other->server_hibernation_);
		std::swap(server_type_, other->server_type_);
		std::swap(server_region_, other->server_region_);
		std::swap(server_loadavg_, other->server_loadavg_);
		std::swap(server_tv_broadcast_time_, other->server_tv_broadcast_time_);
		std::swap(server_game_time_, other->server_game_time_);
		std::swap(server_relay_connected_steam_id_, other->server_relay_connected_steam_id_);
		std::swap(relay_slots_max_, other->relay_slots_max_);
		std::swap(relays_connected_, other->relays_connected_);
		std::swap(relay_clients_connected_, other->relay_clients_connected_);
		std::swap(relayed_game_server_steam_id_, other->relayed_game_server_steam_id_);
		std::swap(parent_relay_count_, other->parent_relay_count_);
		std::swap(tv_secret_code_, other->tv_secret_code_);
		std::swap(_has_bits_[0], other->_has_bits_[0]);
		_unknown_fields_.Swap(&other->_unknown_fields_);
		std::swap(_cached_size_, other->_cached_size_);
	}
}

::google::protobuf::Metadata CMsgGameServerInfo::GetMetadata() const {
	protobuf_AssignDescriptorsOnce();
	::google::protobuf::Metadata metadata;
	metadata.descriptor = CMsgGameServerInfo_descriptor_;
	metadata.reflection = CMsgGameServerInfo_reflection_;
	return metadata;
}

#endif